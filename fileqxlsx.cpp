#include "fileqxlsx.h"
using namespace QXlsx;
FileQxlsx::FileQxlsx()
{

}

QVector<QStringList> FileQxlsx::read()
{

    QXlsx::Document xlsx("Test.xlsx");
    Cell* cell;
    int row=0;
    qInfo()<<"Hai";//int i=0;
    if(xlsx.load())
    {
        qInfo()<<"Hai-1";

        for(row=1;row<=xlsx.dimension().lastRow();row++)
        {
           // std::vector<QVariant> vec;
            QStringList vec;
            qInfo()<<row;
            for(int col=1;col<=xlsx.dimension().lastColumn();col++)
            {
                cell=xlsx.cellAt(row,col);
                QVariant var=cell->readValue();
                //qInfo()<<var<<" - 1";
                vec.append(var.toString());
            }
            table.push_back(vec);
//            qInfo()<<table[i];
//            i++;



        }
    }
    return table;

}
