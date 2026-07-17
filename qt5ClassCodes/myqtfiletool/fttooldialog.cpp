#include "fttooldialog.h"
#include "ui_fttooldialog.h"
#include<QDebug>
#include"myhelper.h"

FTtoolDialog::FTtoolDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FTtoolDialog)
{
    ui->setupUi(this);
     // qDebug()<<MyHelper::verifyIp("127.0.0.1");
     // qDebug()<<MyHelper::verifyIp("172.81.53.105");
}

FTtoolDialog::~FTtoolDialog()
{
    delete ui;
}


void FTtoolDialog::on_btn_send_clicked()
{
   qDebug()<<"send button clicked...";
}


void FTtoolDialog::on_btn_choose_clicked()
{
  // qDebug()<<"choose button clicked...";
  QString path = MyHelper::getOpenFileName();
  // qDebug()<<path;
  if(!path.isEmpty())
        ui->ed_src->setText(path);
  else
     qDebug()<<"No File Selected...";
  //给发送进度条设置范围
  ui->pbar_send->setRange(0,100);
  //给接收进度条设置范围
  ui->pbar_recv->setRange(0,100);
}


void FTtoolDialog::on_btn_listen_clicked()
{
  qDebug()<<"listen button clicked...";
}

