#ifndef CLIENT_H
#define CLIENT_H
#include <QString>

enum Satisfaction{
    sehrZufrieden,
    zufrieden,
    neutral,
    etwasUnzufrieden,
    sehrUnzufrieden
};

class Client
{
public:
    Client();
    Client(QString firstName, QString lastName, Satisfaction satisfaction);

    Satisfaction satisfaction() const;
    void setSatisfaction(Satisfaction newSatisfaction);

    QString getSatisfaction() const;




    const QString &firstName() const;
    void setFirstName(const QString &newFirstName);

    const QString &lastName() const;
    void setLastName(const QString &newLastName);

private:
    QString m_firstName;
    QString m_lastName;
    Satisfaction m_satisfaction;



};

#endif // CLIENT_H
