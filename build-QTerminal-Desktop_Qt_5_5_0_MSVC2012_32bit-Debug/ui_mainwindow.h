/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *ClearButton1;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *outputBox;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QPushButton *ClearButton2;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *inputBox;
    QGroupBox *groupBox_2;
    QPushButton *sendButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QPushButton *rescanButton;
    QComboBox *portName;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_3;
    QComboBox *baudBox;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxCR;
    QCheckBox *checkBoxLF;
    QCheckBox *checkBoxCRLF;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBoxDTR;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QLabel *statusLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1295, 768);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 471, 321));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 448, 286));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        ClearButton1 = new QPushButton(layoutWidget);
        ClearButton1->setObjectName(QStringLiteral("ClearButton1"));

        horizontalLayout->addWidget(ClearButton1);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalSpacer = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_4);

        outputBox = new QPlainTextEdit(layoutWidget);
        outputBox->setObjectName(QStringLiteral("outputBox"));

        verticalLayout->addWidget(outputBox);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        ClearButton2 = new QPushButton(layoutWidget);
        ClearButton2->setObjectName(QStringLiteral("ClearButton2"));

        horizontalLayout_2->addWidget(ClearButton2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        horizontalSpacer_2 = new QSpacerItem(308, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_3);

        inputBox = new QLineEdit(layoutWidget);
        inputBox->setObjectName(QStringLiteral("inputBox"));

        verticalLayout->addWidget(inputBox);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(500, 20, 221, 321));
        sendButton = new QPushButton(groupBox_2);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(11, 291, 75, 23));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 30, 184, 55));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        rescanButton = new QPushButton(widget);
        rescanButton->setObjectName(QStringLiteral("rescanButton"));

        horizontalLayout_5->addWidget(rescanButton);

        portName = new QComboBox(widget);
        portName->setObjectName(QStringLiteral("portName"));

        horizontalLayout_5->addWidget(portName);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        baudBox = new QComboBox(widget);
        baudBox->setObjectName(QStringLiteral("baudBox"));

        horizontalLayout_6->addWidget(baudBox);


        verticalLayout_2->addLayout(horizontalLayout_6);

        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(10, 130, 181, 67));
        horizontalLayout_8 = new QHBoxLayout(widget1);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        checkBoxCR = new QCheckBox(widget1);
        checkBoxCR->setObjectName(QStringLiteral("checkBoxCR"));

        verticalLayout_4->addWidget(checkBoxCR);

        checkBoxLF = new QCheckBox(widget1);
        checkBoxLF->setObjectName(QStringLiteral("checkBoxLF"));

        verticalLayout_4->addWidget(checkBoxLF);

        checkBoxCRLF = new QCheckBox(widget1);
        checkBoxCRLF->setObjectName(QStringLiteral("checkBoxCRLF"));

        verticalLayout_4->addWidget(checkBoxCRLF);


        horizontalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        checkBoxDTR = new QCheckBox(widget1);
        checkBoxDTR->setObjectName(QStringLiteral("checkBoxDTR"));

        verticalLayout_5->addWidget(checkBoxDTR);

        checkBox_4 = new QCheckBox(widget1);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        verticalLayout_5->addWidget(checkBox_4);

        checkBox = new QCheckBox(widget1);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_5->addWidget(checkBox);


        horizontalLayout_8->addLayout(verticalLayout_5);

        widget2 = new QWidget(groupBox_2);
        widget2->setObjectName(QStringLiteral("widget2"));
        widget2->setGeometry(QRect(12, 232, 158, 25));
        horizontalLayout_7 = new QHBoxLayout(widget2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        connectButton = new QPushButton(widget2);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_7->addWidget(connectButton);

        disconnectButton = new QPushButton(widget2);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));

        horizontalLayout_7->addWidget(disconnectButton);

        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(20, 350, 261, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1295, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(inputBox, SIGNAL(returnPressed()), sendButton, SLOT(click()));
        QObject::connect(ClearButton2, SIGNAL(pressed()), inputBox, SLOT(clear()));
        QObject::connect(ClearButton1, SIGNAL(pressed()), outputBox, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Serial", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        ClearButton1->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        ClearButton2->setText(QApplication::translate("MainWindow", "Clear", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Connect", 0));
        sendButton->setText(QApplication::translate("MainWindow", "Send", 0));
        label_3->setText(QApplication::translate("MainWindow", "Port:", 0));
        rescanButton->setText(QApplication::translate("MainWindow", "Rescan", 0));
        label_4->setText(QApplication::translate("MainWindow", "Baud Rate:", 0));
        baudBox->clear();
        baudBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "300", 0)
         << QApplication::translate("MainWindow", "600", 0)
         << QApplication::translate("MainWindow", "1200", 0)
         << QApplication::translate("MainWindow", "2400", 0)
         << QApplication::translate("MainWindow", "9600", 0)
         << QApplication::translate("MainWindow", "14400", 0)
         << QApplication::translate("MainWindow", "19200", 0)
         << QApplication::translate("MainWindow", "22800", 0)
         << QApplication::translate("MainWindow", "38400", 0)
         << QApplication::translate("MainWindow", "57600", 0)
         << QApplication::translate("MainWindow", "115200", 0)
        );
        checkBoxCR->setText(QApplication::translate("MainWindow", "CR", 0));
        checkBoxLF->setText(QApplication::translate("MainWindow", "LF", 0));
        checkBoxCRLF->setText(QApplication::translate("MainWindow", "CR + LF", 0));
        checkBoxDTR->setText(QApplication::translate("MainWindow", "DTR", 0));
        checkBox_4->setText(QApplication::translate("MainWindow", "CheckBox", 0));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", 0));
        connectButton->setText(QApplication::translate("MainWindow", "Connect", 0));
        disconnectButton->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        statusLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
