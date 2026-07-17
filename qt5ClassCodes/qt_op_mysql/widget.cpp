#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connectMysqlDb();
    QSqlQuery query("select * from data");
    //拉伸表格使它填满这个tablewidget
    ui->tbWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    int row = 0;
    while(query.next()){
        ui->tbWidget->insertRow(row);
        qDebug()<<query.value(0).toInt()<<query.value(1).toString()<<query.value(2).toInt();
        ui->tbWidget->setColumnCount(3); //tablewidget默认情况下只有1列，我们需要设置我们需要的列数
        for (int col = 0; col < 3; col++) {
               // query.value(col) 会根据 col 的值 (0, 1, 2) 依次获取对应的字段
               QString data = query.value(col).toString();//添加到tableWidget上面的数据必须是字符串
               ui->tbWidget->setItem(row, col, new QTableWidgetItem(data));
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

void Widget::connectMysqlDb()
{
    //创建连接对象
    m_db = QSqlDatabase::addDatabase("QODBC");
    //设置数据库参数
    m_db.setHostName("127.0.0.1");
    m_db.setPort(3306);
    m_db.setDatabaseName("mydata");
    m_db.setUserName("root");
    m_db.setPassword("root");
    // 3. 尝试打开连接
       if (m_db.open()) {
           qDebug() << "连接成功！";
       } else {
           qDebug() << "连接失败：" << m_db.lastError().text();
       }
}


void Widget::on_tbWidget_clicked(const QModelIndex &index)
{
    // qDebug()<<index.data();
    int row = index.row();
    // qDebug()<<index.sibling(row,0).data()<<index.sibling(row,0).data()<<index.sibling(row,2).data();
    ui->lbl_id->setText(index.sibling(row,0).data().toString());
    ui->ed_name->setText(index.sibling(row,1).data().toString());
    ui->ed_age->setText(index.sibling(row,2).data().toString());
}

