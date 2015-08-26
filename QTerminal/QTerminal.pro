#-------------------------------------------------
#
# Project created by QtCreator 2015-08-24T17:00:36
#
#-------------------------------------------------

QT       += core gui
QT       += serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTerminal
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        serialconnector.cpp \
        settingsdialog.cpp

HEADERS  += mainwindow.h \
         serialconnector.h \
         settingsdialog.h

FORMS    += mainwindow.ui \
         settingsdialog.ui
