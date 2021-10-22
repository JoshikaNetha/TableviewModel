#ifndef TABLEMODEL_H
#define TABLEMODEL_H
#include <qqml.h>
#include <QObject>
#include<QAbstractTableModel>
#include "fileqxlsx.h"
#include<QDebug>

class TableModel : public QAbstractTableModel
{
    Q_OBJECT
   enum TableRoles{
       TableDataRole=Qt::UserRole+1,
       HeadingRole
   };

public:
    explicit TableModel(QObject *parent = nullptr);

    int rowCount(const QModelIndex & = QModelIndex()) const override;

         int columnCount(const QModelIndex & = QModelIndex()) const override;

         QVariant data(const QModelIndex &index, int role) const override;

         QHash<int, QByteArray> roleNames() const override;
          //void setFileIO( File_Qxlsx* file);
         void fun()
         {
             QVector<QStringList> var=ff.read();
             for(int i=0;i<var.length();i++)
             {
                // qInfo()<<var[i];
                n_table.append(var[i]);
                //qInfo()<<n_table[i];
             }

         }

signals:

private:
        QVector<QStringList> n_table;
        FileQxlsx ff;
};

#endif // TABLEMODEL_H
