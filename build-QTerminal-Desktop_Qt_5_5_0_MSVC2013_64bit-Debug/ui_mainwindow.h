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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
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
    QAction *actionConnect_2;
    QAction *actionDisconnect;
    QAction *actionQuit;
    QAction *actionAbout;
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
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxCR;
    QCheckBox *checkBoxLF;
    QCheckBox *checkBoxCRLF;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBoxDTR;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *connectButton;
    QPushButton *disconnectButton;
    QPushButton *settingsButton;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *portLabel;
    QLabel *baudRateLabel;
    QLabel *DatabitsLabel;
    QLabel *parityLabel;
    QLabel *statusLabel;
    QMenuBar *menuBar;
    QMenu *menuMain;
    QMenu *menuTerminal;
    QMenu *menuCalls;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1295, 768);
        actionConnect_2 = new QAction(MainWindow);
        actionConnect_2->setObjectName(QStringLiteral("actionConnect_2"));
        actionDisconnect = new QAction(MainWindow);
        actionDisconnect->setObjectName(QStringLiteral("actionDisconnect"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
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
        sendButton->setGeometry(QRect(11, 291, 191, 23));
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 160, 181, 67));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        checkBoxCR = new QCheckBox(layoutWidget1);
        checkBoxCR->setObjectName(QStringLiteral("checkBoxCR"));

        verticalLayout_4->addWidget(checkBoxCR);

        checkBoxLF = new QCheckBox(layoutWidget1);
        checkBoxLF->setObjectName(QStringLiteral("checkBoxLF"));

        verticalLayout_4->addWidget(checkBoxLF);

        checkBoxCRLF = new QCheckBox(layoutWidget1);
        checkBoxCRLF->setObjectName(QStringLiteral("checkBoxCRLF"));

        verticalLayout_4->addWidget(checkBoxCRLF);


        horizontalLayout_8->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        checkBoxDTR = new QCheckBox(layoutWidget1);
        checkBoxDTR->setObjectName(QStringLiteral("checkBoxDTR"));

        verticalLayout_5->addWidget(checkBoxDTR);

        checkBox_4 = new QCheckBox(layoutWidget1);
        checkBox_4->setObjectName(QStringLiteral("checkBox_4"));

        verticalLayout_5->addWidget(checkBox_4);

        checkBox = new QCheckBox(layoutWidget1);
        checkBox->setObjectName(QStringLiteral("checkBox"));

        verticalLayout_5->addWidget(checkBox);


        horizontalLayout_8->addLayout(verticalLayout_5);

        layoutWidget2 = new QWidget(groupBox_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 260, 191, 25));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        connectButton = new QPushButton(layoutWidget2);
        connectButton->setObjectName(QStringLiteral("connectButton"));

        horizontalLayout_7->addWidget(connectButton);

        disconnectButton = new QPushButton(layoutWidget2);
        disconnectButton->setObjectName(QStringLiteral("disconnectButton"));

        horizontalLayout_7->addWidget(disconnectButton);

        settingsButton = new QPushButton(groupBox_2);
        settingsButton->setObjectName(QStringLiteral("settingsButton"));
        settingsButton->setGeometry(QRect(10, 20, 191, 23));
        widget = new QWidget(groupBox_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(11, 61, 56, 72));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_3->addWidget(label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout_3->addWidget(label_4);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_3->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(74, 62, 121, 72));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        portLabel = new QLabel(widget1);
        portLabel->setObjectName(QStringLiteral("portLabel"));

        verticalLayout_2->addWidget(portLabel);

        baudRateLabel = new QLabel(widget1);
        baudRateLabel->setObjectName(QStringLiteral("baudRateLabel"));

        verticalLayout_2->addWidget(baudRateLabel);

        DatabitsLabel = new QLabel(widget1);
        DatabitsLabel->setObjectName(QStringLiteral("DatabitsLabel"));

        verticalLayout_2->addWidget(DatabitsLabel);

        parityLabel = new QLabel(widget1);
        parityLabel->setObjectName(QStringLiteral("parityLabel"));

        verticalLayout_2->addWidget(parityLabel);

        statusLabel = new QLabel(centralWidget);
        statusLabel->setObjectName(QStringLiteral("statusLabel"));
        statusLabel->setGeometry(QRect(20, 350, 261, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1295, 21));
        menuMain = new QMenu(menuBar);
        menuMain->setObjectName(QStringLiteral("menuMain"));
        menuTerminal = new QMenu(menuBar);
        menuTerminal->setObjectName(QStringLiteral("menuTerminal"));
        menuCalls = new QMenu(menuTerminal);
        menuCalls->setObjectName(QStringLiteral("menuCalls"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMain->menuAction());
        menuBar->addAction(menuTerminal->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuMain->addAction(actionQuit);
        menuTerminal->addAction(menuCalls->menuAction());
        menuCalls->addAction(actionConnect_2);
        menuCalls->addAction(actionDisconnect);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(inputBox, SIGNAL(returnPressed()), sendButton, SLOT(click()));
        QObject::connect(ClearButton2, SIGNAL(pressed()), inputBox, SLOT(clear()));
        QObject::connect(ClearButton1, SIGNAL(pressed()), outputBox, SLOT(clear()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionConnect_2->setText(QApplication::translate("MainWindow", "Connect", 0));
        actionDisconnect->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "About", 0));
        groupBox->setTitle(QApplication::translate("MainWindow", "Serial", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        ClearButton1->setText(QApplication::translate("MainWindow", "Clear", 0));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        ClearButton2->setText(QApplication::translate("MainWindow", "Clear", 0));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Connect", 0));
        sendButton->setText(QApplication::translate("MainWindow", "Send", 0));
        checkBoxCR->setText(QApplication::translate("MainWindow", "CR", 0));
        checkBoxLF->setText(QApplication::translate("MainWindow", "LF", 0));
        checkBoxCRLF->setText(QApplication::translate("MainWindow", "CR + LF", 0));
        checkBoxDTR->setText(QApplication::translate("MainWindow", "DTR", 0));
        checkBox_4->setText(QApplication::translate("MainWindow", "CheckBox", 0));
        checkBox->setText(QApplication::translate("MainWindow", "CheckBox", 0));
        connectButton->setText(QApplication::translate("MainWindow", "Connect", 0));
        disconnectButton->setText(QApplication::translate("MainWindow", "Disconnect", 0));
        settingsButton->setText(QApplication::translate("MainWindow", "Settings", 0));
        label_3->setText(QApplication::translate("MainWindow", "Port:", 0));
        label_4->setText(QApplication::translate("MainWindow", "Baud Rate:", 0));
        label_5->setText(QApplication::translate("MainWindow", "Data Bits:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Parity:", 0));
        portLabel->setText(QApplication::translate("MainWindow", "nA", 0));
        baudRateLabel->setText(QApplication::translate("MainWindow", "nA", 0));
        DatabitsLabel->setText(QApplication::translate("MainWindow", "nA", 0));
        parityLabel->setText(QApplication::translate("MainWindow", "nA", 0));
        statusLabel->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        menuMain->setTitle(QApplication::translate("MainWindow", "Main", 0));
        menuTerminal->setTitle(QApplication::translate("MainWindow", "Terminal", 0));
        menuCalls->setTitle(QApplication::translate("MainWindow", "Calls", 0));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
