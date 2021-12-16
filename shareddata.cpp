#include "shareddata.h"

SharedData::SharedData()
{
    m_clients.append(Client("Enrico","Tran", sehrZufrieden));
    m_clients.append(Client("Miclas","Mende", zufrieden));
    m_clients.append(Client("Patrick","Henniger", neutral));
    m_clients.append(Client("Robin","Fregin", etwasUnzufrieden));
    m_clients.append(Client("Atilla","Bütün", sehrUnzufrieden));

}

SharedData* SharedData::instance(){
    static SharedData* model = new SharedData();
    return model;
}

QList<Client>* SharedData::clients(){
    return &m_clients;
}

void SharedData::addClient(QString firstName, QString lastName, Satisfaction satisfaction){
    m_clients.append(Client(firstName, lastName, satisfaction));
}
