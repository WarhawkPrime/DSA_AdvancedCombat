#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    combat = new Combat;

    //NewCombatSitDialog* newCombatSitDialog = new NewCombatSitDialog(this, combat);

}

MainWindow::~MainWindow()
{
    delete ui;
}

