#include "maincombatwidget.h"
#include "ui_maincombatwidget.h"

MainCombatWidget::MainCombatWidget(QWidget *parent, Combat* combat) :
    QMainWindow(parent),
    ui(new Ui::MainCombatWidget)
{
    ui->setupUi(this);
    this->combat = combat;
}

MainCombatWidget::~MainCombatWidget()
{
    delete ui;
}


void MainCombatWidget::on_actionBack_to_the_main_menu_triggered()
{
    this->close();
}

void MainCombatWidget::on_actionAdd_new_Combatant_triggered()
{

}
