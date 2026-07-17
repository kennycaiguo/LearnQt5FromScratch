#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStringList>
#include<QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // m_cb = new QComboBox(this);
    // m_cb->setGeometry(20,20,180,40);
    // m_cb->setFont(QFont("华文琥珀",14));
    // m_cb->addItem("Java");
    // m_cb->addItems({"Cpp","Python","Js","Go"});
    ui->cbBox->setFont(QFont(ui->fontComboBox->currentText(),15));
    ui->cbBox->addItems({"Cpp","Python","Js","Go"});
    connect(ui->cbBox,SIGNAL(currentIndexChanged(int)),this,SLOT(onIndexChanged(int)));
    // connect(ui->fontComboBox,SIGNAL(currentIndexChanged(int)),this,SLOT(fontIndexChanged(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onIndexChanged(int idx)
{
     Q_UNUSED(idx);
      // int crr_idx = ui->cbBox->currentIndex();
      // qDebug()<< (crr_idx == idx);
      qDebug()<<ui->cbBox->currentText();
}

void MainWindow::fontIndexChanged(int idx)
{
    Q_UNUSED(idx);
    ui->cbBox->setFont(QFont(ui->fontComboBox->currentText(),15));
}


void MainWindow::on_btnDel_clicked()
{
    //获取选中项，也就是当前项
    int index = ui->cbBox->currentIndex();
    //路由索引删除数据
    ui->cbBox->removeItem(index);

}


void MainWindow::on_fontComboBox_currentFontChanged(const QFont &f)
{
    ui->cbBox->setFont(f);
}

