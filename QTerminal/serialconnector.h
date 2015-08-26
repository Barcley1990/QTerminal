#ifndef SERIALCONNECTOR_H
#define SERIALCONNECTOR_H

#include <QMainWindow>
#include <QWidget>
#include <QtSerialPort/QtSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "mainwindow.h"
#include "settingsdialog.h"
#include <QThread>

class MainWindow;


class SerialConnector : public QWidget
{
    Q_OBJECT

MainWindow *myMainWindow;

public:
    SerialConnector(MainWindow*);
    ~SerialConnector();



    void WriteToSerial(QString);

    QByteArray m_qb;


signals:
    void finished();
    void error(QString err);

public slots:
    void openSerialPort();
    void closeSerialPort();
    void CR_Checkbox(int);
    void LF_Checkbox(int);
    void CRLF_Checkbox(int);
    void DTR_Checkbox(int);

    void getDataFromInputBox();
    void ReadFromSerial();

private:
    QSerialPort *m_serial;
    QThread *thread;
    SettingsDialog *m_settings;

    bool m_CR;
    bool m_LF;
    bool m_CRLF;
    int m_DTR;
};

#endif // SERIALCONNECTOR_H
