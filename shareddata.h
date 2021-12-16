#ifndef SHAREDDATA_H
#define SHAREDDATA_H

#include "client.h"
#include "QList"
#include "QString"


class SharedData
{
private:
    SharedData();

public:
    QList<Client>* clients();
    static SharedData* instance();
    void addClient(QString firstName, QString lastName, Satisfaction satisfaction);



private:
    QList<Client> m_clients;
};

#endif // SHAREDDATA_H
