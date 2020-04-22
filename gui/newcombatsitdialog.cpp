#include "newcombatsitdialog.h"
#include "ui_newcombatsitdialog.h"

NewCombatSitDialog::NewCombatSitDialog(QWidget *parent, Combat* combat) :
    QDialog(parent),
    ui(new Ui::NewCombatSitDialog)
{
    ui->setupUi(this);
    this->combat = combat;
}

NewCombatSitDialog::~NewCombatSitDialog()
{
    delete ui;
}

//Bestätigen
void NewCombatSitDialog::on_pushButton_clicked()
{

    //Name einlesen und neue kampfsituation erstellen
    combat->createNewCombatsituation(ui->lineEdit->text(), ui->textEdit->toPlainText() );

    //Zur Kontrolle, durch unit test erstetzten und später löschen, dient aktuell nur zur Kontrolle!
    QMessageBox::information(this, "Anzahl an KampfSituationen", QString::number(combat->getCombatsituationsSize()) , QMessageBox::Ok);

    this->close();
}

//Abbrechen
void NewCombatSitDialog::on_pushButton_2_clicked()
{
    this->close();
}
