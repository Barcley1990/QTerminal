#ifndef SERIALCONNECTOR_H
#define SERIALCONNECTOR_H

#include <QMainWindow>
#include <QWidget>
#include <QtSerialPort/QtSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <QThread>
#include <QScrollBar>

#include "mainwindow.h"
#include "settingsdialog.h"
#include "macrodialog.h"


class MainWindow;


class SerialConnector : public QDialog
{
    Q_OBJECT

MainWindow *myMainWindow;

public:
    SerialConnector(MainWindow*);
    ~SerialConnector();

    void WriteToSerial(QString);

    QByteArray m_qb;
    QSerialPort *m_serial;

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
    void autoScrollCheckbox(int);

    void getDataFromInputBox();
    void ReadFromSerial();

private:

    SettingsDialog *m_settings;

    bool m_CR;
    bool m_LF;
    bool m_CRLF;
    int m_DTR;
    bool m_autoScroll;

};

#endif // SERIALCONNECTOR_H
