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

INCLUDEPATH += C:\AlliedVisionTechnologies\AVTVimba_1.3\VimbaCPP\Include\
INCLUDEPATH += C:\AlliedVisionTechnologies\AVTVimba_1.3\
LIBS += C:\AlliedVisionTechnologies\AVTVimba_1.3\VimbaC\Lib\Win64\
LIBS += C:\AlliedVisionTechnologies\AVTVimba_1.3\VimbaCPP\Lib\Win64\

INCLUDEPATH += C:\opencv\build\include\
LIBS += C:\opencv\build\x64\vc12\bin\*.dll
LIBS += C:\opencv\build\x64\vc12\lib\*.lib



SOURCES += main.cpp\
        mainwindow.cpp \
        serialconnector.cpp \
        settingsdialog.cpp \
        macrodialog.cpp \
    cameraconnector.cpp

HEADERS  += mainwindow.h \
         serialconnector.h \
         settingsdialog.h \
         macrodialog.h \
    cameraconnector.h

FORMS    += mainwindow.ui \
         settingsdialog.ui \
         macrodialog.ui
