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

    //connect(ui->macroEdit_1, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_1()));
    connect(ui->macroName_1, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_1()));
    connect(ui->macroName_1, SIGNAL(textEdited(QString)), parent, SLOT(updateMacroButtons(QString)));
    //connect(ui->macroRepeatTime_1, SIGNAL(textEdited(QString)), this, SLOT(macroEdited_1()));

    macroEdited_1();
    test="Hallo";
}

MacroDialog::~MacroDialog()
{
    qDebug() << "MacroDialog -> Destructor";
    delete ui;
}

void MacroDialog::macroEdited_1()
{
    test = ui->macroName_1->text();
    qDebug() << "in macroedidet" << ui->macroName_1->text();
    qDebug() << "in macroedidet" <<  test;
}
