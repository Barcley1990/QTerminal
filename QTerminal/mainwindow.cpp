#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    setupUi(this);
    m_serial = new SerialConnector(this);

}

MainWindow::~MainWindow()
{
    delete m_serial;

}


