#include "addnewnpcdialog.h"
#include "ui_addnewnpcdialog.h"

addNewNPCDialog::addNewNPCDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addNewNPCDialog)
{
    ui->setupUi(this);
}

addNewNPCDialog::~addNewNPCDialog()
{
    delete ui;
}
