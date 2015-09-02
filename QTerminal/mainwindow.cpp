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

    timer1 = new QTimer(this);

    /* show Macro Dialog */
    connect(setMacrosButton, SIGNAL(clicked()), m_macros, SLOT(show()));
    // if M1 Button in MainWindow is clicked, call SendMacroM1 to update MacroButtonName
    connect(m1Button, SIGNAL(clicked()), this, SLOT(SendMacroM1()));
    connect(timer1, SIGNAL(timeout()), this, SLOT(timerHandler()));

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
    qDebug() << "Checkbox: " << m_macros->m1.bM1RepeatCheckbox;

    if (!timer1->isActive())
        timer1->start(1000);
}

void MainWindow::timerHandler()
{
    if(m_macros->m1.bM1RepeatCheckbox == true)
    {
    qDebug() << m_macros->m1.bM1RepeatCheckbox;
        if(m_com->m_serial->isOpen())
             m_com->WriteToSerial(m_macros->m1.value);
        else
        {
            qDebug() << "Serial is not open\r";
            return;
        }
     }
    else{
        qDebug() << "iwashere";
        timer1->stop();
    }
}
