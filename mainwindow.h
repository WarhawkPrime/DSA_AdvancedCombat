#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "newcombatsitdialog.h"
#include "combat.h"

#include <QMessageBox>
#include <QMouseEvent>
#include <QDebug>

//QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
//QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionNeue_Kampfsituation_triggered();

    void on_actionSpeichern_und_Beenden_triggered();

private:
    Ui::MainWindow *ui;
    Combat* combat;
    NewCombatSitDialog* newCombatSitDialog;
};
#endif // MAINWINDOW_H
