#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStatusBar>
#include<QProgressBar>
#include<QPushButton>
#include<QLabel>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //存在就获取,不存在就创建
   QStatusBar * statusBar = this->statusBar();
   // 如果状态栏没有被创建, 这样的设置是必要的.
   // 如果状态栏已经在窗口中存在,这样的设置其实意义不大,但是也没副作用,仍然保留.
   this->setStatusBar(statusBar);
   // //显示一个临时的信息.
   // statusBar->showMessage("这是一个状态消息");
   //给状态栏中添加子控件
   QLabel * label = new QLabel("这是一个QLabel");
   statusBar->addWidget(label);
   QProgressBar * progressBar = new QProgressBar();
   progressBar->setRange(0,100);
   progressBar->setValue(50);
   statusBar->addWidget(progressBar);
   QPushButton * button = new QPushButton("按钮");
   //使用 addPermanentWidget 将这个按钮添加到状态栏的右端.与常规的addWidget不同,addPermanentWidget会将控件固定在状态栏的最右侧,且不随状态栏中的其他控件变化而移动.
   statusBar->addPermanentWidget(button);
}

MainWindow::~MainWindow()
{
    delete ui;
}

