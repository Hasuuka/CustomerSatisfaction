#include "deletedialog.h"
#include "ui_deletedialog.h"

deleteDialog::deleteDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::deleteDialog)
{
    ui->setupUi(this);
}

deleteDialog::~deleteDialog()
{
    delete ui;
}

int deleteDialog::id() const
{
    QString input = ui->idEdit->text();
    return input.toInt();
}
