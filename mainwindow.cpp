#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    combat = new Combat;

    //initiale dimensionen der Tabelle für combat situations
    ui->tableWidgetCombatSituations->setColumnCount(1);
    ui->tableWidgetCombatSituations->setRowCount(combat->getCombatsituationsSize());
    ui->tableWidgetCombatSituations->setEditTriggers(QAbstractItemView::NoEditTriggers);

}

MainWindow::~MainWindow()
{
    delete ui;
    delete combat;
}


void MainWindow::on_actionNeue_Kampfsituation_triggered()
{
    //NewCombatSitDialog* newCombatSitDialog = new NewCombatSitDialog(this, combat);
    newCombatSitDialog = new NewCombatSitDialog(this, combat);
    newCombatSitDialog->exec();

    //initiale dimensionen der Tabelle für combat situations
    ui->tableWidgetCombatSituations->setColumnCount(1);
    ui->tableWidgetCombatSituations->setRowCount(combat->getCombatsituationsSize());
    ui->tableWidgetCombatSituations->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //Tabelle füllen
    for (int i{0};i<combat->getCombatsituationsSize();i++) {
        ui->tableWidgetCombatSituations->setItem(i, 0, new QTableWidgetItem(QString(combat->getCombatsituationByIndex(i)->getName())));
    }
}

void MainWindow::on_actionSpeichern_und_Beenden_triggered()
{
    exit(0);
}
