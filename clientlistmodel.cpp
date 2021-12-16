#include "clientlistmodel.h"

ClientListModel::ClientListModel(QList<Client>* clients, QObject *parent)
    : QAbstractItemModel(parent), m_clients(clients)
{
}

QVariant ClientListModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if(role == Qt::DisplayRole){
        if(orientation == Qt::Horizontal){
            switch(section){
            case 0: return "First name";
            case 1: return "Last Name";
            case 2: return "Satisfaction";
            }
        } else{
            return QString::number(section + 1);
        }
    }
     return QVariant();
}

QModelIndex ClientListModel::index(int row, int column, const QModelIndex &parent) const
{
    return createIndex(row, column);
}

QModelIndex ClientListModel::parent(const QModelIndex &index) const
{
    return QModelIndex();
}

int ClientListModel::rowCount(const QModelIndex &parent) const
{
    return m_clients->size();
}

int ClientListModel::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant ClientListModel::data(const QModelIndex &index, int role) const
{
    if (!index.isValid())
        return QVariant();
if(role == Qt::DisplayRole){
    const Client& client = m_clients->at(index.row());
    switch(index.column()){
        case 0: return client.firstName();
        case 1: return  client.lastName();
        case 2: return client.getSatisfaction();
    }
}
    // FIXME: Implement me!
    return QVariant();
}
