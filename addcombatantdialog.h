#ifndef ADDCOMBATANTDIALOG_H
#define ADDCOMBATANTDIALOG_H

#include <QDialog>

namespace Ui {
class AddCombatantDialog;
}

class AddCombatantDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddCombatantDialog(QWidget *parent = nullptr);
    ~AddCombatantDialog();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::AddCombatantDialog *ui;
};

#endif // ADDCOMBATANTDIALOG_H
