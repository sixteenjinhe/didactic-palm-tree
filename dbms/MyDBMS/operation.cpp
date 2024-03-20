#include "operation.h"
#include <QDebug>

operation::operation()
{

}

void operation::createDataBase(QStringList &strList){
    if(strList[1].compare("database")==0){//创库
                if(strList.size()==3){//语句输入形式正确
                   qDebug()<<"Right Sentence";
                }
                else qDebug()<<"Wrong Sentence";//语句输入格式错误
    }
}
