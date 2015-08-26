#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "macrodialog.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);
    m_serial = new SerialConnector(this);
    m_macros = new MacroDialog(this);

    /* show Macro Dialog */
    connect(setMacrosButton, SIGNAL(clicked()), m_macros, SLOT(show()));

    actionConnect->setEnabled(true);
    actionDisconnect->setEnabled(false);
    actionConfigure->setEnabled(true);
    initActionsConnections();

}

MainWindow::~MainWindow()
{
    delete m_serial;
    delete m_macros;
}


void MainWindow::initActionsConnections()
{
    connect(actionSet_Makros, SIGNAL(triggered()), m_macros, SLOT(show()));
    connect(actionConnect, SIGNAL(triggered()), m_serial, SLOT(openSerialPort()));
    connect(actionDisconnect, SIGNAL(triggered()), m_serial, SLOT(closeSerialPort()));
    connect(actionQuit, SIGNAL(triggered()), this, SLOT(close()));
    //connect(actionConfigure, SIGNAL(triggered()), settings, SLOT(show()));
    connect(actionAbout, SIGNAL(triggered()), m_serial, SLOT(about()));
    //connect(actionAboutQt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}

