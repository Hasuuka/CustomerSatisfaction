#include "client.h"

Client::Client()
{

}

Client::Client(QString firstName, QString lastName, Satisfaction satisfaction):
    m_firstName(firstName), m_lastName(lastName), m_satisfaction(satisfaction)
{

}


Satisfaction Client::satisfaction() const
{
    return m_satisfaction;
}

void Client::setSatisfaction(Satisfaction newSatisfaction)
{
    m_satisfaction = newSatisfaction;
}

QString Client::getSatisfaction() const
{
    switch(this->satisfaction()){
    case 0:
        return QString("sehr zufrieden");
        break;
    case 1:
        return QString("zufrieden");
        break;
    case 2:
        return QString("neutral");
        break;
    case 3:
        return QString("etwas unzufrieden");
        break;
    case 4:
        return QString("sehr unzufrieden");
        break;
    }
}

const QString &Client::firstName() const
{
    return m_firstName;
}

void Client::setFirstName(const QString &newFirstName)
{
    m_firstName = newFirstName;
}

const QString &Client::lastName() const
{
    return m_lastName;
}

void Client::setLastName(const QString &newLastName)
{
    m_lastName = newLastName;
}
