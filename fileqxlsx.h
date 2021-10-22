#ifndef FILEQXLSX_H
#define FILEQXLSX_H

#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"
#include <vector>
#include<QDebug>
//#include <QObject>
class FileQxlsx
{
 QVector<QStringList> table;
public:
    FileQxlsx();
    QVector<QStringList> read();


};

#endif // FILEQXLSX_H
