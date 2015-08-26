#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QtSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <iostream>
#include <QIODevice>
#include <queue>
#include <qlist.h>
#include "serialconnector.h"
#include "ui_mainwindow.h"
#include "macrodialog.h"

class SerialConnector;



class MainWindow : public QMainWindow, public Ui::MainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initActionsConnections();


private:
    //Ui::MainWindow *ui;
    SerialConnector *m_serial;
    MacroDialog *m_macros;

};

#endif // MAINWINDOW_H










