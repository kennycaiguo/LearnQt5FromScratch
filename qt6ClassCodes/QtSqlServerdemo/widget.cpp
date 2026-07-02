#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //配置数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("localhost");
    db.setDatabaseName("company");
    db.setUserName("sa");
    db.setPassword("sa12345");
    //数据库链接测试
    bool ret = db.open();
    if(!ret)
        QMessageBox::critical(this,"error","打开数据库失败");
    //数据查询
     m_model = new QSqlTableModel(this);//注意，这里必须要new，不能使用QSqlTableModel model;步使用new创建对象获取不到数据
     m_model->setTable("emp");
     m_model->select();

     ui->tbview->setModel(m_model);
    //关闭连接
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_tbview_clicked(const QModelIndex &index)
{
    // //开启tableview整行选中功能
    // ui->tbview->setSelectionBehavior(QAbstractItemView::SelectRows);
    // qDebug()<<index.row();
    // QVariant var = index.data();
    // qDebug()<<var;
    QModelIndex itemIndex = index.sibling(index.row(), 0);
    qDebug()<<itemIndex.data();
    itemIndex = index.sibling(index.row(), 1);
    qDebug()<<itemIndex.data();
    itemIndex = index.sibling(index.row(), 2);
    qDebug()<<itemIndex.data();
    itemIndex = index.sibling(index.row(), 3);
    qDebug()<<itemIndex.data();
    itemIndex = index.sibling(index.row(), 4);
    qDebug()<<itemIndex.data();
    itemIndex = index.sibling(index.row(), 5);
    qDebug()<<itemIndex.data();
    itemIndex = index.sibling(index.row(), 6);
    qDebug()<<itemIndex.data();
}

