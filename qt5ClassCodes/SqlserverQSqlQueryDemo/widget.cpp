#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connectSqlServer();
}

void Widget::connectSqlServer()
{
  m_db = QSqlDatabase::addDatabase("QODBC");
  m_db.setHostName("localhost");
  m_db.setDatabaseName("company");
  m_db.setUserName("root");
  m_db.setPassword("root");
  if(!m_db.open())
      qDebug()<<"连接数据库失败";
  else
      qDebug()<<"连接数据库成功";
  QSqlQuery query("select * from emp;");
  int row = 0;
  //默认tablewidget只能够显示1列，需要设置我们的总列数
  ui->tbwidget->setColumnCount(7);
  //设置拉伸列
  ui->tbwidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
  while(query.next()){
      ui->tbwidget->insertRow(row);
      for(int i=0;i<ui->tbwidget->columnCount();i++){
          //添加搭配tablewidget里面的数据必须是字符串
          QTableWidgetItem * item = new QTableWidgetItem(query.value(i).toString());
          ui->tbwidget->setItem(row,i,item);
      }
      row++;
  }
}

Widget::~Widget()
{
    delete ui;
    if(m_db.isOpen())
        m_db.close();
}


void Widget::on_tbwidget_clicked(const QModelIndex &index)
{
    int row = index.row();
    QString data = index.sibling(row,0).data().toString();
    ui->lblid->setText(data);
    data = index.sibling(row,1).data().toString();
    ui->ed_name->setText(data);
    data = index.sibling(row,2).data().toString();
    ui->ed_age->setText(data);
    data = index.sibling(row,3).data().toString();
    ui->ed_gender->setText(data);
    data = index.sibling(row,4).data().toString();
    ui->ed_phone->setText(data);
    data = index.sibling(row,5).data().toString();
    ui->ed_email->setText(data);
    data = index.sibling(row,6).data().toString();
    ui->ed_dep->setText(data);

}

