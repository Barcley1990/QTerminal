#include "macrodialog.h"
#include "ui_macrodialog.h"
#include "mainwindow.h"
#include <QDebug>
QT_USE_NAMESPACE

class MainWindow;
static const char blankString[] = QT_TRANSLATE_NOOP("Macro Settings", "N/A");

MacroDialog::MacroDialog(QWidget *parent) : QDialog(parent), ui(new Ui::MacroDialog)
{
    qDebug() << "MacroDialog -> Constructor";
    ui->setupUi(this);

    /**/
    connect(ui->macroEdit_1, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_1()));
    connect(ui->macroName_1, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_1()));
    connect(ui->macroRepeatTime_1, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_1()));
    connect(ui->macroRepeatCB_1, SIGNAL(stateChanged(int)), this, SLOT(macroEdited_1()));
    connect(ui->macroName_1, SIGNAL(textEdited(QString)), parent, SLOT(updateMacro1Buttons(QString)));

    connect(ui->macroEdit_2, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_2()));
    connect(ui->macroName_2, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_2()));
    connect(ui->macroRepeatTime_2, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_2()));
    connect(ui->macroRepeatCB_2, SIGNAL(stateChanged(int)), this, SLOT(macroEdited_2()));
    connect(ui->macroName_2, SIGNAL(textEdited(QString)), parent, SLOT(updateMacro2Buttons(QString)));

    connect(ui->macroEdit_3, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_3()));
    connect(ui->macroName_3, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_3()));
    connect(ui->macroRepeatTime_3, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_3()));
    connect(ui->macroRepeatCB_3, SIGNAL(stateChanged(int)), this, SLOT(macroEdited_3()));
    connect(ui->macroName_3, SIGNAL(textEdited(QString)), parent, SLOT(updateMacro3Buttons(QString)));

    connect(ui->macroEdit_4, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_4()));
    connect(ui->macroName_4, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_4()));
    connect(ui->macroRepeatTime_4, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_4()));
    connect(ui->macroRepeatCB_4, SIGNAL(stateChanged(int)), this, SLOT(macroEdited_4()));
    connect(ui->macroName_4, SIGNAL(textEdited(QString)), parent, SLOT(updateMacro4Buttons(QString)));
    /**/

    macroEdited_1();

}

MacroDialog::~MacroDialog()
{
    qDebug() << "MacroDialog -> Destructor";
    delete ui;
}

void MacroDialog::macroEdited_1()
{
    m1.name = ui->macroName_1->text();
    m1.repeatTime = ui->macroRepeatTime_1->text();
    m1.value = ui->macroEdit_1->text();
    // get Checkbox State
    if(ui->macroRepeatCB_1->isChecked())
        m1.bRepeatCheckbox = true;
    else
        m1.bRepeatCheckbox = false;
}

void MacroDialog::macroEdited_2()
{
    m2.name = ui->macroName_2->text();
    m2.repeatTime = ui->macroRepeatTime_2->text();
    m2.value = ui->macroEdit_2->text();
    // get Checkbox State
    if(ui->macroRepeatCB_2->isChecked())
        m2.bRepeatCheckbox = true;
    else
        m2.bRepeatCheckbox = false;
}
void MacroDialog::macroEdited_3()
{
    m3.name = ui->macroName_3->text();
    m3.repeatTime = ui->macroRepeatTime_3->text();
    m3.value = ui->macroEdit_3->text();
    // get Checkbox State
    if(ui->macroRepeatCB_3->isChecked())
        m3.bRepeatCheckbox = true;
    else
        m3.bRepeatCheckbox = false;
}
void MacroDialog::macroEdited_4()
{
    m4.name = ui->macroName_4->text();
    m4.repeatTime = ui->macroRepeatTime_4->text();
    m4.value = ui->macroEdit_4->text();
    // get Checkbox State
    if(ui->macroRepeatCB_1->isChecked())
        m4.bRepeatCheckbox = true;
    else
        m4.bRepeatCheckbox = false;
}

