#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "macrodialog.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    qDebug() << "MainWindow -> Constructor";
    setupUi(this);
    m_com = new SerialConnector(this);
    m_macros = new MacroDialog(this);
    m_camera = new CameraConnector(this);

    /* show Macro Dialog */
    connect(setMacrosButton, SIGNAL(clicked()), m_macros, SLOT(show()));
    // if M1 Button in MainWindow is clicked, call SendMacroM1 to update MacroButtonName
    connect(m1Button, SIGNAL(clicked()), this, SLOT(SendMacroM1()));

    actionConnect->setEnabled(true);
    actionDisconnect->setEnabled(false);
    actionConfigure->setEnabled(true);
    initActionsConnections();

}

MainWindow::~MainWindow()
{
    qDebug() << "MainWindow -> Destructor";
    delete m_com;
    delete m_macros;
}


void MainWindow::initActionsConnections()
{
//    connect(actionSet_Makros, SIGNAL(triggered()), m_macros, SLOT(show()));
//    connect(actionConnect, SIGNAL(triggered()), m_com, SLOT(openSerialPort()));
//    connect(actionDisconnect, SIGNAL(triggered()), m_com, SLOT(closeSerialPort()));
//    connect(actionQuit, SIGNAL(triggered()), this, SLOT(close()));
    //connect(actionConfigure, SIGNAL(triggered()), settings, SLOT(show()));
   // connect(actionAbout, SIGNAL(triggered()), m_serial, SLOT(about()));
    //connect(actionAboutQt, SIGNAL(triggered()), qApp, SLOT(aboutQt()));
}
void MainWindow::updateMacroButtons(QString string)
{
    m1Button->setText(string);
}

void MainWindow::SendMacroM1()
{
    qDebug() << "name" << m_macros->m1.name;
    qDebug() << "value" << m_macros->m1.value;
    qDebug() << "repeatTime" << m_macros->m1.repeatTime;
}
