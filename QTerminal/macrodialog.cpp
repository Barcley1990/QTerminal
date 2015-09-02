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
    connect(ui->macroName_1, SIGNAL(textEdited(QString)), parent, SLOT(updateMacroButtons(QString)));
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
        m1.bM1RepeatCheckbox = true;
    else
        m1.bM1RepeatCheckbox = false;
}
