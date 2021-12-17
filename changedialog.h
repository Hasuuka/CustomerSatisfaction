#ifndef CHANGEDIALOG_H
#define CHANGEDIALOG_H

#include <QDialog>
#include <client.h>

namespace Ui {
class changeDialog;
}

class changeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit changeDialog(QWidget *parent = nullptr);
    ~changeDialog();

    QString firstName()const;
    QString lastName()const;
    Satisfaction satisfaction()const;
    int id()const;
private slots:
    void on_happyButton_clicked();

    void on_happinessButton_clicked();

    void on_neutralButton_clicked();

    void on_sadButton_clicked();

    void on_cryingButton_clicked();

private:
    Ui::changeDialog *ui;
};

#endif // CHANGEDIALOG_H
