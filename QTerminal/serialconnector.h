#ifndef SERIALCONNECTOR_H
#define SERIALCONNECTOR_H

#include <QMainWindow>
#include <QWidget>
#include <QtSerialPort/QtSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "mainwindow.h"
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

    QString m_port;
    QString m_baud;
    qint32 m_baudrate;
    QString m_dbits;
    QByteArray m_qb;


signals:
    void finished();
    void error(QString err);

public slots:
    void configure();
    void disconnect();
    void scanPortNames();
    void choosePort(int);
    void chooseBaud(int);

    void CR_Checkbox(int);
    void LF_Checkbox(int);
    void CRLF_Checkbox(int);
    void DTR_Checkbox(int);

    void getDataFromInputBox();
    void ReadFromSerial();

private:
    QSerialPort *m_serial;
    QThread *thread;

    bool m_CR;
    bool m_LF;
    bool m_CRLF;
    int m_DTR;
};

#endif // SERIALCONNECTOR_H
