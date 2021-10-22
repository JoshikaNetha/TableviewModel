#include "tablemodel.h"
#include "fileqxlsx.h"

TableModel::TableModel(QObject *parent) : QAbstractTableModel(parent)
{
    fun();
}

//    n_table.append({"AT","V","AP","RH","PE"});
//    n_table.append({"8.34","40.77","1010.84","90.01","480.48"});
//    n_table.append({"23.64","58.49","1011.4","74.2","445.75"});
//    n_table.append({"29.74","56.9","1007.15","41.91","438.76"});
//    n_table.append({"19.07","49.69","1007.22","76.79","453.09"});
//    n_table.append({"11.8","40.66","1017.13","97.2","464.43"});
//    n_table.append({"13.97","39.16","1016.05","84.6","470.96"});
//    n_table.append({"22.1","71.29","1008.2","75.38","442.35"});
//    n_table.append({"14.47","41.76","1021.98","78.41","464"});


int TableModel::rowCount(const QModelIndex &) const
{
    return n_table.size(); // row
}

int TableModel::columnCount(const QModelIndex &) const
{
   return n_table.at(0).size(); //column
}

QVariant TableModel::data(const QModelIndex &index, int role) const
{
    switch (role) {
    case TableDataRole:
    {
        return n_table.at(index.row()).at(index.column());
    }
    case HeadingRole:
    {
        if(index.row()==0){
            return true;
        }else
        {
            return false;
        }
    }
    default:
        break;
    }

    return QVariant();
}

QHash<int, QByteArray> TableModel::roleNames() const
{

  QHash<int,QByteArray> roles;
  roles[TableDataRole]="tabledata";
  roles[HeadingRole]="heading";
  return roles;
}


