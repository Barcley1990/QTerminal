#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);
    m_serial = new SerialConnector(this);

    connect(rescanButton, SIGNAL(clicked()), m_serial, SLOT(scanPortNames()));		// Scan Portnames (scan Button)
    connect(portName, SIGNAL(activated(int)), m_serial, SLOT(choosePort(int)));		// choose Port (dropdown)
    connect(baudBox, SIGNAL(activated(int)), m_serial, SLOT(chooseBaud(int)));		// choose Baud (dropdown)
    connect(connectButton, SIGNAL(clicked()), m_serial, SLOT(configure()));			// connect to Port (Pushbutton)
    connect(disconnectButton, SIGNAL(clicked()), m_serial, SLOT(disconnect()));		// disconnect from Port (Pushbutton)
}

MainWindow::~MainWindow()
{
    delete m_serial;

}


