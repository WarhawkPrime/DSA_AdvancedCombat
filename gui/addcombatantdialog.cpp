#include "addcombatantdialog.h"
#include "ui_addcombatantdialog.h"

AddCombatantDialog::AddCombatantDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddCombatantDialog)
{
    ui->setupUi(this);
}

AddCombatantDialog::~AddCombatantDialog()
{
    delete ui;
}

void AddCombatantDialog::on_pushButton_2_clicked()
{
    this->close();
}
