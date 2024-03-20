#ifndef CMD_H
#define CMD_H

#include <QWidget>

namespace Ui {
class cmd;
}

class cmd : public QWidget
{
    Q_OBJECT

public:
    explicit cmd(QWidget *parent = nullptr);
    ~cmd();
    void split(QString str);


private slots:
    void on_plainTextEdit_textChanged();

private:
    Ui::cmd *ui;

};

#endif // CMD_H
