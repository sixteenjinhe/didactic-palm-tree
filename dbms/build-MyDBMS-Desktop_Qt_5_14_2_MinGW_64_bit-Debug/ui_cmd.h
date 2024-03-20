/********************************************************************************
** Form generated from reading UI file 'cmd.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CMD_H
#define UI_CMD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cmd
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QWidget *cmd)
    {
        if (cmd->objectName().isEmpty())
            cmd->setObjectName(QString::fromUtf8("cmd"));
        cmd->resize(662, 389);
        verticalLayoutWidget = new QWidget(cmd);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(60, 20, 521, 331));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        plainTextEdit = new QPlainTextEdit(verticalLayoutWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        retranslateUi(cmd);

        QMetaObject::connectSlotsByName(cmd);
    } // setupUi

    void retranslateUi(QWidget *cmd)
    {
        cmd->setWindowTitle(QCoreApplication::translate("cmd", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cmd: public Ui_cmd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CMD_H
