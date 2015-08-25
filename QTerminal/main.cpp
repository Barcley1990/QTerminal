#include "mainwindow.h"
#include "serialconnector.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

/*    QThread *thread = new QThread;
    SerialConnector *com = new SerialConnector();
    com->moveToThread(thread);
    connect(com, SIGNAL(error(QString)), this, SLOT(errorString(QString)));
    connect(thread, SIGNAL(started()), com, SLOT(ReadFromSerial()));
    thread->start();
*/
    MainWindow w;
    w.show();

    return a.exec();
}
