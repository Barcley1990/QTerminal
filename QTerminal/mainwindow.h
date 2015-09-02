#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSerialPort/QtSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <iostream>
#include <QIODevice>
#include <queue>
#include <qlist.h>

#include <opencv2/opencv.hpp>
#include <opencv2/opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <QTimer>

#include "serialconnector.h"
#include "ui_mainwindow.h"
#include "macrodialog.h"
#include "cameraconnector.h"

class SerialConnector;



class MainWindow : public QMainWindow, public Ui::MainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void initActionsConnections();

public slots:
    void updateMacro1Buttons(QString string);
    void updateMacro2Buttons(QString string);
    void updateMacro3Buttons(QString string);
    void updateMacro4Buttons(QString string);
    void timerHandler1();
    void timerHandler2();
    void timerHandler3();
    void timerHandler4();
    void SendMacroM1();
    void SendMacroM2();
    void SendMacroM3();
    void SendMacroM4();

private:
    //Ui::MainWindow *ui;
    SerialConnector *m_com;
    MacroDialog *m_macros;
    CameraConnector *m_camera;

    QTimer *timer1, *timer2, *timer3, *timer4;

};

#endif // MAINWINDOW_H










