#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "shareddata.h"
#include "editdialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_clientListModel = new ClientListModel(SharedData::instance()->clients(), this);
    ui->clientList->setModel(m_clientListModel);
    connect(this, &MainWindow::informAddingClient, this, &MainWindow::addClient);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonAdd_clicked()
{
    editDialog dlg;
    if(dlg.exec()==QDialog::Accepted){

        emit informAddingClient(dlg.firstName(), dlg.lastName(), dlg.satisfaction());
    }
}

void MainWindow::addClient(QString firstName, QString lastName, Satisfaction satisfaction){
    SharedData::instance()->addClient(firstName, lastName, satisfaction);
    m_clientListModel = new ClientListModel(SharedData::instance()->clients(), this);
    ui->clientList->setModel(m_clientListModel);
    qDebug()<< "easy";
}

