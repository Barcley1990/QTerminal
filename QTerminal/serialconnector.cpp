#include "serialconnector.h"

SerialConnector::SerialConnector(MainWindow *mWindow) : myMainWindow(mWindow)
{
    qDebug() << "SerialConnector->Constructor";
    m_serial = new QSerialPort();
    m_settings = new SettingsDialog;


    m_CR = false;
    m_LF = false;
    m_CRLF = false;
    // Read from Serial
    connect(m_serial, SIGNAL(readyRead()), this, SLOT(ReadFromSerial()));
    // show Settingsdialog
    connect(myMainWindow->settingsButton, SIGNAL(clicked()), m_settings, SLOT(show()));

    connect(myMainWindow->connectButton, SIGNAL(clicked()), this, SLOT(openSerialPort()));			// connect to Port (Pushbutton)
    connect(myMainWindow->disconnectButton, SIGNAL(clicked()), this, SLOT(closeSerialPort()));		// disconnect from Port (Pushbutton)

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

    delete m_settings;
    m_settings = nullptr;
}


void SerialConnector::closeSerialPort()
{
    qDebug() << "closeSerialPort()";
    if (m_serial->isOpen())
        m_serial->close();

    // reset connect button's text to Connect
    myMainWindow->connectButton->setText("Connect");
    myMainWindow->statusLabel->setText("Disconnected");
}
void SerialConnector::openSerialPort()
{

    SettingsDialog::Settings p = m_settings->settings();
    myMainWindow->portLabel->setText(p.name);
    myMainWindow->baudRateLabel->setText(p.stringBaudRate);
    myMainWindow->DatabitsLabel->setText(p.stringDataBits);
    myMainWindow->parityLabel->setText(p.stringParity);

    m_serial->setPortName(p.name);
    m_serial->setBaudRate(p.baudRate);
    m_serial->setDataBits(p.dataBits);
    m_serial->setParity(p.parity);
    m_serial->setStopBits(p.stopBits);
    m_serial->setFlowControl(p.flowControl);


    if (m_serial->open(QIODevice::ReadWrite))
    {
        qDebug() << "openSerialPort()";
    }

    // set connect button's text to Reconnect
    myMainWindow->connectButton->setText("Reconnect");
    myMainWindow->statusLabel->setText("Conected");
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
    qDebug() << "Read from Serial";
    if (!m_serial)
        return;
    if (!m_serial->isOpen())
        return;
    QByteArray data = m_serial->readAll();
     myMainWindow->outputBox->appendPlainText(data);


/*
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
*/
}

// Memberfunction to write to Serial.
void SerialConnector::WriteToSerial(QString data)
{
    qDebug()<< "Write to Serial";
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



