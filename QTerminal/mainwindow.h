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
    void updateMacroButtons(QString string);
     void timerHandler();
    void SendMacroM1();

private:
    //Ui::MainWindow *ui;
    SerialConnector *m_com;
    MacroDialog *m_macros;
    CameraConnector *m_camera;

    QTimer *timer1;

};

#endif // MAINWINDOW_H










