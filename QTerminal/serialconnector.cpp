#include "serialconnector.h"

SerialConnector::SerialConnector(MainWindow *mWindow) : myMainWindow(mWindow)
{
    m_serial = new QSerialPort();


}

SerialConnector::~SerialConnector()
{
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
        //if (m_DTR == 2)
        //    m_serial->setDataTerminalReady(true);
        //else
            m_serial->setDataTerminalReady(false);
        myMainWindow->statusLabel->setText("Connection established");
    }
}
