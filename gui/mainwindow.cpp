#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    combat = new Combat;

    //initiale dimensionen der Tabelle für combat situations
    ui->tableWidgetCombatSituations->setColumnCount(2);
    ui->tableWidgetCombatSituations->setRowCount(combat->getCombatsituationsSize());
    ui->tableWidgetCombatSituations->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionNeue_Kampfsituation_triggered()
{
    //NewCombatSitDialog* newCombatSitDialog = new NewCombatSitDialog(this, combat);
    newCombatSitDialog = new NewCombatSitDialog(this, combat);
    newCombatSitDialog->exec();

    //initiale dimensionen der Tabelle für combat situations
    ui->tableWidgetCombatSituations->setColumnCount(2);
    ui->tableWidgetCombatSituations->setRowCount(combat->getCombatsituationsSize());
    ui->tableWidgetCombatSituations->setEditTriggers(QAbstractItemView::NoEditTriggers);

    //Tabelle füllen
    for (int i{0};i<combat->getCombatsituationsSize();i++) {
        ui->tableWidgetCombatSituations->setItem(i, 0, new QTableWidgetItem(QString(combat->getCombatsituationByIndex(i)->getName())));
        ui->tableWidgetCombatSituations->setItem(i, 1, new QTableWidgetItem(QString (combat->getCombatsituationByIndex(i)->getDescription())));
    }
}

void MainWindow::on_actionSpeichern_und_Beenden_triggered()
{
    exit(0);
}

void MainWindow::on_tableWidgetCombatSituations_cellClicked(int row, int column)
{

}

void MainWindow::on_tableWidgetCombatSituations_cellDoubleClicked(int row, int column)
{
    mainCombatWidget = new MainCombatWidget(this, combat);
    mainCombatWidget->showFullScreen();
}
