#ifndef SERIALCONNECTOR_H
#define SERIALCONNECTOR_H

#include <QMainWindow>
#include <QWidget>
#include <QtSerialPort/QtSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include "mainwindow.h"


class MainWindow;


class SerialConnector : public QWidget
{
    Q_OBJECT

MainWindow *myMainWindow;

public:
    SerialConnector(MainWindow*);
    ~SerialConnector();

    QString m_port;
    QString m_baud;
    qint32 m_baudrate;
    QString m_dbits;
    QByteArray m_qb;

signals:

public slots:
    void configure();
    void disconnect();
    void scanPortNames();
    void choosePort(int);
    void chooseBaud(int);


private:
    QSerialPort *m_serial;
};

#endif // SERIALCONNECTOR_H
