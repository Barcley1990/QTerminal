#include "serialconnector.h"

SerialConnector::SerialConnector(MainWindow *mWindow) : myMainWindow(mWindow)
{
    qDebug() << "SerialConnector->Constructor";
    m_serial = new QSerialPort();
    m_CR = false;
    m_LF = false;
    m_CRLF = false;
    m_port = "";
    m_baudrate = 9600;

    connect(m_serial, SIGNAL(readyRead()), this, SLOT(ReadFromSerial()));			// Read from Serial

    connect(myMainWindow->rescanButton, SIGNAL(clicked()), this, SLOT(scanPortNames()));		// Scan Portnames (scan Button)
    connect(myMainWindow->portName, SIGNAL(activated(int)), this, SLOT(choosePort(int)));		// choose Port (dropdown)
    connect(myMainWindow->baudBox, SIGNAL(activated(int)), this, SLOT(chooseBaud(int)));		// choose Baud (dropdown)
    connect(myMainWindow->connectButton, SIGNAL(clicked()), this, SLOT(configure()));			// connect to Port (Pushbutton)
    connect(myMainWindow->disconnectButton, SIGNAL(clicked()), this, SLOT(disconnect()));		// disconnect from Port (Pushbutton)

    connect(myMainWindow->checkBoxCR, SIGNAL(stateChanged(int)), this, SLOT(CR_Checkbox(int)));		// CR Checkbox
    connect(myMainWindow->checkBoxLF, SIGNAL(stateChanged(int)), this, SLOT(LF_Checkbox(int)));		// CR Checkbox
    connect(myMainWindow->checkBoxCRLF, SIGNAL(stateChanged(int)), this, SLOT(CRLF_Checkbox(int)));	// CR Checkbox
    connect(myMainWindow->checkBoxDTR, SIGNAL(stateChanged(int)), this, SLOT(DTR_Checkbox(int)));
    connect(myMainWindow->sendButton, SIGNAL(clicked()), this, SLOT(getDataFromInputBox()));	// Write to Serial

}

SerialConnector::~SerialConnector()
{
    qDebug() << "SerialConnector->Destructor";
    if (m_serial && m_serial->isOpen())
    {
        m_serial->close();
        myMainWindow->statusLabel->setText("Disconnected");
    }
    delete m_serial;
    m_serial = nullptr;
}


void SerialConnector::scanPortNames()
{
    qDebug() << "starting portscan";

    QStringList stringlist;
    QList<QSerialPortInfo> ports = QSerialPortInfo::availablePorts();
    // remove old items
    qDebug() << "port Items:" << myMainWindow->portName->count();

    for (int i=myMainWindow->portName->count(); i >= 0; i--)
    {
        qDebug() << "item removed: " << "i =" << i;
        myMainWindow->portName->removeItem(i);
    }
    qDebug() << "port Items:" << myMainWindow->portName->count();
    foreach(QSerialPortInfo item, ports)
    {
        stringlist.append(item.portName());
    }
    myMainWindow->portName->addItems(stringlist);
}

void SerialConnector::choosePort(int arg)
{
    m_port = myMainWindow->portName->itemText(arg);
    qDebug() << m_port;
}
void SerialConnector::chooseBaud(int arg)
{
    m_baud = myMainWindow->baudBox->itemText(arg);
    bool ok;
    m_baudrate = m_baud.toInt(&ok, 10);
    qDebug() << m_baudrate;
}
void SerialConnector::disconnect()
{
    if (m_serial->isOpen())
        m_serial->close();

    // reset connect button's text to Connect
    myMainWindow->connectButton->setText("Connect");
    myMainWindow->statusLabel->setText("Disconnected");
}
void SerialConnector::configure()
{
    if (m_serial->isOpen())
        m_serial->close();

    // fallback
    if (m_port.isEmpty())
    {
        int idx = myMainWindow->portName->currentIndex();
        if (idx == -1)
            return;

        m_port = myMainWindow->portName->itemText(idx);
    }

    // set new port
    m_serial->setPortName(m_port);

    if (m_serial->open(QIODevice::ReadWrite))
    {
        m_serial->setBaudRate(m_baudrate, QSerialPort::AllDirections);
        m_serial->setDataBits(QSerialPort::Data8);
        m_serial->setParity(QSerialPort::NoParity);
        m_serial->setStopBits(QSerialPort::OneStop);
        m_serial->setFlowControl(QSerialPort::NoFlowControl);
        myMainWindow->connectButton->setText("Reconnect");
        if (m_DTR == 2)
            m_serial->setDataTerminalReady(true);
        else
            m_serial->setDataTerminalReady(false);
        myMainWindow->statusLabel->setText("Connection established");
    }
}
void SerialConnector::DTR_Checkbox(int arg)
{
    m_DTR = arg;
    qDebug() << "DTR_Checkbox changed";
    if (m_serial)
    {
        if (m_DTR == 2) // if checked
            m_serial->setDataTerminalReady(true);
        else
            m_serial->setDataTerminalReady(false);
    }
    else
    {
        qDebug() << "Serial is not open\r";
        return;
    }
}
void SerialConnector::CR_Checkbox(int arg)
{
    int CR = arg;
    qDebug() << "CR_Checkbox changed";
    if (CR == 2) // if checked
        m_CR = true;
    else
        m_CR = false;
}
void SerialConnector::LF_Checkbox(int arg)
{
    int LF = arg;
    qDebug() << "LF_Checkbox changed";
    if (LF == 2) // if checked
        m_LF = true;
    else
        m_LF = false;
}
void SerialConnector::CRLF_Checkbox(int arg)
{
    int CRLF = arg;
    qDebug() << "CRLF_Checkbox changed";
    if (CRLF == 2) // if checked
        m_CRLF = true;
    else
        m_CRLF = false;
}

// Slot is called if send button was clicked.
void SerialConnector::getDataFromInputBox()
{
    if (m_serial && !m_serial->isOpen())
    return;
    QString inputString = myMainWindow->inputBox->displayText();
    WriteToSerial(inputString);
}

// Slot to read from serial
void SerialConnector::ReadFromSerial()
{
    if (!m_serial)
        return;
    if (!m_serial->isOpen())
        return;

    m_qb  = m_serial->readAll();
    int old_size;
    old_size = m_qb.size();
    //myMainWindow->outputBox->setPlainText(m_qb);
    m_qb.append(m_serial->readAll());
    int new_size = m_qb.size();

    if ((m_qb.at(new_size - 1) == '\n') || (m_qb.at(new_size - 1) == '\r'))
    {
        QString text(m_qb);
        myMainWindow->outputBox->appendPlainText(text);
        m_qb.clear();
    }
    qDebug() << "read from Serial: " << m_qb;
    emit finished();
}

// Memberfunction to write to Serial.
void SerialConnector::WriteToSerial(QString data)
{
    qDebug()<< "was here";
    qDebug() <<"Data to send: " << data << endl;
    if (!data.isEmpty())
    {
        QByteArray qb;
        qb.append(data);
        // check if EOL flag is set.
        if (m_CR)
        {
            qb.append('\r');
        }
        if (m_LF)
        {
            qb.append('\n');
        }
        if (m_CRLF)
        {
            qb.append('\r\n');
        }

        int complete_size = qb.size();
        int send = m_serial->write(qb);
        while (send < complete_size)
        {
            m_serial->waitForBytesWritten(1);
            qb.remove(0, send);
            send += m_serial->write(qb);
            qDebug() << "Retransmitted: " << send;
        }
        //QThread::msleep(100);
        qDebug() << "Data sended: " << qb << endl;
    }
    else
        qDebug() << "Empty String" << endl;
}



