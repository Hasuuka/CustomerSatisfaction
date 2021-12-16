#include "editdialog.h"
#include "ui_editdialog.h"
#include <QDebug>

editDialog::editDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::editDialog)
{
    ui->setupUi(this);
}

editDialog::~editDialog()
{
    delete ui;
}


QString editDialog::firstName() const{
   return ui->firstNameEdit->text();
}

QString editDialog::lastName() const{
    return ui->lastNameEdit->text();
}

Satisfaction editDialog::satisfaction()const{
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

