#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include  <clientlistmodel.h>
#include <editdialog.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
signals:
    void informAddingClient(QString, QString, Satisfaction);

private slots:
    void on_pushButtonAdd_clicked();
    void addClient(QString firstName, QString lastName, Satisfaction satisfaction);


private:
    Ui::MainWindow *ui;
    ClientListModel* m_clientListModel;
};
#endif // MAINWINDOW_H
