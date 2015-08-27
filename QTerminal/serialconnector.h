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


class SerialConnector : public MacroDialog
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
    void autoScrollCheckbox(int);

    void getDataFromInputBox();
    void ReadFromSerial();

    void SendMacroM1();

private:
    QSerialPort *m_serial;
    SettingsDialog *m_settings;
    MacroDialog *m_macro;

    bool m_CR;
    bool m_LF;
    bool m_CRLF;
    int m_DTR;
    bool m_autoScroll;

};

#endif // SERIALCONNECTOR_H
