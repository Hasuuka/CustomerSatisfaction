#ifndef EDITDIALOG_H
#define EDITDIALOG_H

#include <QDialog>
#include <client.h>


namespace Ui {
class editDialog;
}

class editDialog : public QDialog
{
    Q_OBJECT

public:
    explicit editDialog(QWidget *parent = nullptr);
    ~editDialog();

    QString firstName()const;
    QString lastName()const;
    Satisfaction satisfaction()const;


private slots:


    void on_happyButton_clicked();

    void on_happinessButton_clicked();

    void on_neutralButton_clicked();

    void on_sadButton_clicked();

    void on_cryingButton_clicked();

signals:


private:
    Ui::editDialog *ui;
};

#endif // EDITDIALOG_H
