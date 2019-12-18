#ifndef NEWCOMBATSITDIALOG_H
#define NEWCOMBATSITDIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "combat.h"

namespace Ui {
class NewCombatSitDialog;
}

class NewCombatSitDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewCombatSitDialog(QWidget *parent = nullptr, Combat* combat = nullptr);
    ~NewCombatSitDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::NewCombatSitDialog *ui;
    Combat* combat;
};

#endif // NEWCOMBATSITDIALOG_H
