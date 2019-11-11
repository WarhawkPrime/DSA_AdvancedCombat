#include "newcombatsitdialog.h"
#include "ui_newcombatsitdialog.h"

NewCombatSitDialog::NewCombatSitDialog(QWidget *parent, Combat* combat) :
    QWidget(parent),
    ui(new Ui::NewCombatSitDialog)
{
    ui->setupUi(this);
    this->combat = combat;
}

NewCombatSitDialog::~NewCombatSitDialog()
{
    delete ui;
}
