#ifndef MAINCOMBATWIDGET_H
#define MAINCOMBATWIDGET_H

#include <QMainWindow>

#include "engine/combat.h"

namespace Ui {
class MainCombatWidget;
}

class MainCombatWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainCombatWidget(QWidget *parent = nullptr, Combat* combat = nullptr);
    ~MainCombatWidget();

private slots:
    void on_actionBack_to_the_main_menu_triggered();

    void on_actionAdd_new_Combatant_triggered();

private:
    Ui::MainCombatWidget *ui;
    Combat* combat;
};

#endif // MAINCOMBATWIDGET_H
