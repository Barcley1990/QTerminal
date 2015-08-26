#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);
    m_serial = new SerialConnector(this);
    actionConnect->setEnabled(true);
    actionDisconnect->setEnabled(false);
    actionConfigure->setEnabled(true);
    initActionsConnections();;

}

MainWindow::~MainWindow()
{
    delete m_serial;

}


void MainWindow::initActionsConnections()
{
    connect(actionConnect, SIGNAL(triggered()), m_serial, SLOT(openSerialPort()));
    connect(actionDisconnect, SIGNAL(triggered()), m_serial, SLOT(closeSerialPort()));
    connect(actionQuit, SIGNAL(triggered()), this, SLOT(close()));
    //connect(actionConfigure, SIGNAL(triggered()), settings, SLOT(show()));
    connect(actionAbout, SIGNAL(triggered()), m_serial, SLOT(about()));
    //connect(actionAboutQt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

