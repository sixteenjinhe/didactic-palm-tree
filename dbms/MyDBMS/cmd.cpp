#include "cmd.h"
#include "ui_cmd.h"
#include "operation.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPlainTextEdit>

cmd::cmd(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::cmd)
{
    ui->setupUi(this);
    ui->plainTextEdit->setPlainText("Welcome to mybase !"); //显示提示语
    ui->plainTextEdit->appendPlainText("mybatabase >");
    ui->plainTextEdit->moveCursor(QTextCursor::End);//把光标移动到文本框末尾
    //this->resize( QSize( 1000, 800 ));
}

cmd::~cmd()
{
    delete ui;
}

void cmd::on_plainTextEdit_textChanged()//命令行文本框的槽函数
{
    QString str;//存放每条命令的字符串
    QString inputText = ui->plainTextEdit->toPlainText();//随键盘输入不断获取字符
    str += inputText;//追加到字符串
    //qDebug()<<str;
    QChar lastChar =str.right(1).at(0);//获取最后输入的字符
    if(bool bl=operator ==(lastChar,';'))//如果最后是‘；’说明用户输入命令结束，该执行操作
    {
        str.replace(QRegExp(";$"), "");//去掉‘；’符号，获取纯净的命令
        str.remove(0,32);//之后需要改，这里先这样
        str=str.toLower();//统一变成小写字母，方便识别
        split(str);//拆分命令
        //qDebug()<<str;
    }
}

void cmd::split(QString str){//拆分命令
    QStringList strList = str.split(" ");//根据空格拆分，把每个单词存储到字符串数组里,方便识别命令
//    for(int i=0;i < strList.size();i++)//遍历字符串数组
//    {
//        qDebug()<<strList[i];
//    }
    operation op;
    if(strList[0].compare("create")==0)//如果命令第一个词为create,有两种情况：database和table
       op.createDataBase(strList);//调用创建数据库函数

}
