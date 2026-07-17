#include "dialog.h"
#include<QLabel>
#include<QLineEdit>
#include<QPushButton>
#include<QGridLayout>
#include<QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QLabel* plbl1 = new QLabel("请输入圆的半径",this);
    QLabel* presult = new QLabel("",this);
    QLineEdit *pedit = new QLineEdit(this);
    QPushButton* pbtn = new QPushButton("显示结果",this);
    QGridLayout * playout = new QGridLayout(this);
    playout->addWidget(plbl1,0,0);
    playout->addWidget(pedit,0,1);
    playout->addWidget(pbtn,1,0);
    playout->addWidget(presult,1,1);
    QObject::connect(pbtn,&QPushButton::clicked,this,[=](){
        // int r = pedit->text().toInt();
        // double result = 3.14 * r * r;
        // presult->setText(QString::number(result));
        QMessageBox::information(nullptr,"result",presult->text());
    });

    QObject::connect(pedit,&QLineEdit::textChanged,this,[=](){
        int r = pedit->text().toInt();
        double result = 3.14 * r * r;
        presult->setText(QString::number(result));
    });

}

Dialog::~Dialog()
{
}

