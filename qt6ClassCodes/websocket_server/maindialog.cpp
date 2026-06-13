#include "maindialog.h"
#include "ui_maindialog.h"
#include<QDebug>

MainDialog::MainDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainDialog)
{
    ui->setupUi(this);
    //创建一个WebSocketServer指针,采用不安全方式
    mpSktServer = new QWebSocketServer("server",QWebSocketServer::NonSecureMode);
    //我们默认禁用断开链接和发送消息按钮的使用，因为我们需要点击启动按钮才能够启动服务器，在服务器准备好之前不要点击这两个按钮
    ui->btnSend->setEnabled(false);
    ui->btnStop->setEnabled(false);
}

MainDialog::~MainDialog()
{
    delete ui;
}

void MainDialog::onNewConnection()
{
   //获取客户的下一个连接标签返回一个socket
   mpSocket = mpSktServer->nextPendingConnection();
   //连接槽
   connect(mpSocket,SIGNAL(textMessageReceived(QString)),this,SLOT(proTextMsg(QString)));
   connect(mpSocket,SIGNAL(disconnected),this,SLOT(onDisconnect()));
   QString item = mpSocket->peerAddress().toString();
   ui->lw_msg_list->addItem(item);

   // //添加到客户端列表
   mClients << mpSocket;
   // mClients.append(mpSocket);
}

void MainDialog::onDisconnect()
{

}
void MainDialog::proTextMsg(QString msg)
{

}




void MainDialog::on_btnStart_clicked()
{
    //获取端口号
    int port = ui->spbox_port->text().toUInt();
    //服务器监听指定的端口
    mpSktServer->listen(QHostAddress::Any,port);
    //服务器开始监听后，可以把断开和发送按钮设置为可用，同时需要把启动按钮设置为不可用，因为服务器已经在监听了
    ui->btnStart->setEnabled(false); //启动按钮不可用
    ui->btnSend->setEnabled(true);
    ui->btnStop->setEnabled(true);
}


void MainDialog::on_btnStop_clicked()
{
    //断开链接需要做2件事情，
    //1.就是把启动按钮启用，其他两个禁用
    ui->btnStart->setEnabled(true); //启动按钮可用
    ui->btnSend->setEnabled(false);
    ui->btnStop->setEnabled(false);
    //2.改变socket分服务器
    mpSktServer->close();
}


void MainDialog::on_btnSend_clicked()
{
   // QString msg = ui->ed_data_send->toPlainText();
   QString msg = ui->ed_data_send->document()->toPlainText();
   qDebug()<<msg;
   //发送给每一个客户，所以需要遍历客户列表
   for(int i=0;i<mClients.size();i++)
   {
       mClients.at(i)->sendTextMessage(msg);
   }
}

