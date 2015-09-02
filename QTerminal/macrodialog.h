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
        bool bRepeatCheckbox;
    }m1,m2,m3,m4;

    explicit MacroDialog(QWidget *parent = 0);
    ~MacroDialog();



public slots:
    void macroEdited_1();
    void macroEdited_2();
    void macroEdited_3();
    void macroEdited_4();


private:
    Ui::MacroDialog *ui;
};

#endif // MACRODIALOG_H
