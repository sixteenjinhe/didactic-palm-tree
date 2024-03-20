#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cmd.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_pushButton_clicked()
{
    FILE * froot;//存放root密码的文件
    char c;
    QString str;
    QString strTxtEdt = ui->textEdit->toPlainText();//获取textedit中的内容
    //qDebug()<<strTxtEdt;
    froot = fopen ("D:/dbms/File/root.txt", "r");//打开文件
    if (froot == NULL)
        qDebug()<<"Error opening root file"; // 打开失败
      else//打开成功
      {
        while ((c = fgetc(froot)) != EOF)// 获取字符
        {
          str.push_back(c);//追加到字符串中，str字符串存储root密码
        }
        //qDebug()<<str;
        fclose (froot); // 关闭root文件
      }
    if(str.compare(strTxtEdt)==0){//密码输入正确
        //界面跳转
        this->close();//隐藏父界面
        cmd *cmdwindow=new cmd();
        cmdwindow->show();//显示子界面
//        cmd Cmd;
//        Cmd.displayhit();//调用displayhit函数
      }
    else
    {
        //显示密码输错的提示信息
    }
}
