#ifndef MACRODIALOG_H
#define MACRODIALOG_H

#include <QDialog>


namespace Ui {
class MacroDialog;
}

class MacroDialog : public QDialog
{
    Q_OBJECT

public:
    struct Macros {
        QString name, value, repeatTime;
    }m1;

    explicit MacroDialog(QWidget *parent = 0);
    ~MacroDialog();



public slots:
    void macroEdited_1();


private:
    Ui::MacroDialog *ui;
};

#endif // MACRODIALOG_H
