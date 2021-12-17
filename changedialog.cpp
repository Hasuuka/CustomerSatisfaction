#include "changedialog.h"
#include "ui_changedialog.h"

changeDialog::changeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changeDialog)
{
    ui->setupUi(this);
}

changeDialog::~changeDialog()
{
    delete ui;
}

QString changeDialog::firstName() const
{
    return ui->firstNameEdit->text();
}

QString changeDialog::lastName() const{
    return ui->lastNamelineEdit->text();
}

int changeDialog::id() const{
    QString input = ui->idEdit->text();
    int output = input.toInt() - 1;
    return output;
}

Satisfaction changeDialog::satisfaction()const{
    QString input = ui->satisfactionEdit->text();
    if(input == "sehr zufrieden"){
        return sehrZufrieden;
    }
    else{
        if(input == "zufrieden"){
            return zufrieden;
        }else{
            if(input == "neutral"){
                return neutral;
            }else{
                if(input == "etwas unzufrieden"){
                    return etwasUnzufrieden;
                }else{
                    if(input == "sehr unzufrieden"){
                        return sehrUnzufrieden;
                    }else{
                        qDebug() <<"Error";
                        return sehrUnzufrieden;
                    }
                }
            }
        }
    }
}

