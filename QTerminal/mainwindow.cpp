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
    timer2 = new QTimer(this);
    timer3 = new QTimer(this);
    timer4 = new QTimer(this);

    /* show Macro Dialog */
    connect(setMacrosButton, SIGNAL(clicked()), m_macros, SLOT(show()));
    // if M1 Button in MainWindow is clicked, call SendMacroM1 to update MacroButtonName
    connect(m1Button, SIGNAL(clicked()), this, SLOT(SendMacroM1()));
    connect(timer1, SIGNAL(timeout()), this, SLOT(timerHandler1()));
    connect(m2Button, SIGNAL(clicked()), this, SLOT(SendMacroM2()));
    connect(timer2, SIGNAL(timeout()), this, SLOT(timerHandler2()));
    connect(m3Button, SIGNAL(clicked()), this, SLOT(SendMacroM3()));
    connect(timer3, SIGNAL(timeout()), this, SLOT(timerHandler3()));
    connect(m4Button, SIGNAL(clicked()), this, SLOT(SendMacroM4()));
    connect(timer4, SIGNAL(timeout()), this, SLOT(timerHandler4()));

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
    delete timer1, timer2, timer3, timer4;
}


void MainWindow::initActionsConnections()
{
    connect(actionSet_Makros, SIGNAL(triggered()), m_macros, SLOT(show()));
    connect(actionConnect, SIGNAL(triggered()), m_com, SLOT(openSerialPort()));
    connect(actionDisconnect, SIGNAL(triggered()), m_com, SLOT(closeSerialPort()));
    connect(actionQuit, SIGNAL(triggered()), this, SLOT(close()));
}
void MainWindow::updateMacro1Buttons(QString string)
{
    m1Button->setText(string);
}
void MainWindow::updateMacro2Buttons(QString string)
{
    m2Button->setText(string);
}
void MainWindow::updateMacro3Buttons(QString string)
{
    m3Button->setText(string);
}
void MainWindow::updateMacro4Buttons(QString string)
{
    m4Button->setText(string);
}

void MainWindow::SendMacroM1()
{
    if(m_com->m_serial->isOpen())
         m_com->WriteToSerial(m_macros->m1.value);
    timer1->start((m_macros->m1.repeatTime).toInt());
}
void MainWindow::SendMacroM2()
{
    if(m_com->m_serial->isOpen())
         m_com->WriteToSerial(m_macros->m2.value);
    timer2->start((m_macros->m2.repeatTime).toInt());
}
void MainWindow::SendMacroM3()
{
    if(m_com->m_serial->isOpen())
         m_com->WriteToSerial(m_macros->m3.value);
    timer3->start((m_macros->m3.repeatTime).toInt());
}
void MainWindow::SendMacroM4()
{
    if(m_com->m_serial->isOpen())
         m_com->WriteToSerial(m_macros->m4.value);
    timer4->start((m_macros->m4.repeatTime).toInt());
}

void MainWindow::timerHandler1()
{
    if(m_macros->m1.bRepeatCheckbox == true)
    {
    qDebug() << m_macros->m1.bRepeatCheckbox;
        if(m_com->m_serial->isOpen())
        {
             m_com->WriteToSerial(m_macros->m1.value);
        }
        else
        {
            qDebug() << "Serial is not open\r";
            return;
        }
     }
    else
        timer1->stop();
}
void MainWindow::timerHandler2()
{

    if(m_macros->m2.bRepeatCheckbox == true)
    {
    qDebug() << m_macros->m2.bRepeatCheckbox;
        if(m_com->m_serial->isOpen())
        {
             m_com->WriteToSerial(m_macros->m2.value);
        }
        else
        {
            qDebug() << "Serial is not open\r";
            return;
        }
     }
    else
        timer2->stop();
}
void MainWindow::timerHandler3()
{

    if(m_macros->m3.bRepeatCheckbox == true)
    {
    qDebug() << m_macros->m3.bRepeatCheckbox;
        if(m_com->m_serial->isOpen())
        {
             m_com->WriteToSerial(m_macros->m3.value);
        }
        else
        {
            qDebug() << "Serial is not open\r";
            return;
        }
     }
    else
        timer3->stop();
}
void MainWindow::timerHandler4()
{

    if(m_macros->m4.bRepeatCheckbox == true)
    {
    qDebug() << m_macros->m4.bRepeatCheckbox;
        if(m_com->m_serial->isOpen())
        {
             m_com->WriteToSerial(m_macros->m4.value);
        }
        else
        {
            qDebug() << "Serial is not open\r";
            return;
        }
     }
    else
        timer4->stop();
}
