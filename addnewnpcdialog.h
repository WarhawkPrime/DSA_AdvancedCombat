#ifndef ADDNEWNPCDIALOG_H
#define ADDNEWNPCDIALOG_H

#include <QDialog>

namespace Ui {
class addNewNPCDialog;
}

class addNewNPCDialog : public QDialog
{
    Q_OBJECT

public:
    explicit addNewNPCDialog(QWidget *parent = nullptr);
    ~addNewNPCDialog();

private:
    Ui::addNewNPCDialog *ui;
};

#endif // ADDNEWNPCDIALOG_H
