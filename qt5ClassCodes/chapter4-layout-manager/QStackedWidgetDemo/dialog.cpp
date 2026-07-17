#include "dialog.h"
#include <QHBoxLayout>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    setWindowTitle("StackedWidget Demo");

    //创建list指向的对象
    list = new QListWidget(this);
    //在新建的QListWidget控件中插入三个条目，作为选择项
    list->insertItem(0,tr("Window1"));
    list->insertItem(1,tr("Window2"));
    list->insertItem(2,tr("Window3"));
    //创建3给并且
    label1 = new QLabel(tr("Widget1 of StackedWidget"));
    label2 = new QLabel(tr("Widget2 of StackedWidget"));
    label3 = new QLabel(tr("Widget3 of StackedWidget"));
    //创建StackedWidget对象并且返回指针
    stackW = new QStackedWidget(this);
    //把标签添加到StackedWidget对象
    stackW->addWidget(label1);
    stackW->addWidget(label2);
    stackW->addWidget(label3);
    //创建一个水平布局对象标签返回指针
    QHBoxLayout *hlayout = new QHBoxLayout(this);
    hlayout->setSpacing(5);
    hlayout->addWidget(list);
    hlayout->addWidget(stackW,0,Qt::AlignHCenter);
    hlayout->setStretchFactor(list,1);
    hlayout->setStretchFactor(stackW,3);
    //连接 QListWidget的currentRowChanged信号到QStackedWidget的setCurrentIndex槽函数实现点击切换控件
    connect(list,SIGNAL(currentRowChanged(int)),stackW,SLOT(setCurrentIndex(int)));
}

Dialog::~Dialog()
{
}

