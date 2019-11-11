#ifndef NEWCOMBATSITDIALOG_H
#define NEWCOMBATSITDIALOG_H

#include <QWidget>

#include "combat.h"

namespace Ui {
class NewCombatSitDialog;
}

class NewCombatSitDialog : public QWidget
{
    Q_OBJECT

public:
    explicit NewCombatSitDialog(QWidget *parent = nullptr, Combat* combat = nullptr);
    ~NewCombatSitDialog();

private:
    Ui::NewCombatSitDialog *ui;
    Combat* combat;
};

#endif // NEWCOMBATSITDIALOG_H
