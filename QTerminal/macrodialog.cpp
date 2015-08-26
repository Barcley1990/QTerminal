#include "macrodialog.h"
#include "ui_macrodialog.h"
#include "mainwindow.h"
#include <QDebug>
QT_USE_NAMESPACE

class MainWindow;
static const char blankString[] = QT_TRANSLATE_NOOP("Macro Settings", "N/A");

MacroDialog::MacroDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MacroDialog)
{
    ui->setupUi(this);

    connect(ui->macroEdit_1, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_1()));
    connect(ui->macroName_1, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_1()));
    connect(ui->macroName_1, SIGNAL(textEdited(QString)), parent, SLOT(updateMacroButtons(QString)));
    connect(ui->macroRepeatTime_1, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_1()));
}

MacroDialog::~MacroDialog()
{
    delete ui;
}

void MacroDialog::macroEdited_1()
{
    MacroDialog::Macros m1;
    m1.name = ui->macroName_1->text();
    m1.repeatTime = ui->macroRepeatTime_1->text();
    m1.value = ui->macroEdit_1->text();
    qDebug() << m1.name;
    qDebug() << m1.value;
    qDebug() << m1.repeatTime;


}
