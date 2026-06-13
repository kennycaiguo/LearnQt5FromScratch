#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMenuBar>
#include<QMenu>
#include<QAction>
#include<QFileDialog>
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //手动添加菜单
    //创建菜单条
    QMenuBar* pmBar = new QMenuBar();
    this->setMenuBar(pmBar);
    //创建菜单
    QMenu* pfMenu = new QMenu("文件");
    QMenu* peMenu = new QMenu("编辑");
    QMenu* pexMenu = new QMenu("帮助");
    //把菜单添加到菜单条
    pmBar->addMenu(pfMenu);
    pmBar->addMenu(peMenu);
    pmBar->addMenu(pexMenu);
    //创文件建菜单的命令Action
    QAction* pNew = new QAction("新建");
    QAction* pOpen = new QAction("打开");
    QAction* pSave = new QAction("保存");
    QAction* pSaveAs = new QAction("另存为");
    QAction* pQuit = new QAction("退出");
    //添加action到文件菜单
    pfMenu->addAction(pNew);
    pfMenu->addAction(pOpen);
    pfMenu->addAction(pSave);
    pfMenu->addAction(pSaveAs);
    pfMenu->addAction(pQuit);
    //创建编辑菜单的命令
    QAction* pCopy = new QAction("拷贝");
    QAction* pPaste = new QAction("粘贴");
    QAction* pFind = new QAction("查找");
    QAction* pReplace = new QAction("替换");
    QAction* pUndo = new QAction("撤销");
    //添加action到编辑菜单
    peMenu->addAction(pCopy);
    peMenu->addAction(pPaste);
    peMenu->addAction(pFind);
    peMenu->addAction(pReplace);
    peMenu->addAction(pUndo);
    //创建帮助菜单的命令
    QAction* pAbout = new QAction("关于本程序");
    pexMenu->addAction(pAbout);

    //给一些action连接槽函数
    connect(pOpen,&QAction::triggered,this,handleOpen);
    connect(pQuit,&QAction::triggered,this,handleQuit);
    connect(pAbout,&QAction::triggered,this,handleAbout);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleOpen()
{
    QString fileName = QFileDialog::getOpenFileName(
        this,
        tr("Open Document"),
        QDir::homePath(),
        tr("Text Files (*.txt);;All Files (*.*)")
    );
    if(!fileName.isEmpty()){
        this->setWindowTitle(fileName);
    }
}

void MainWindow::handleQuit()
{
    this->close();
}

void MainWindow::handleAbout()
{
    QMessageBox::information(nullptr,"关于本程序","menudemo 版本1.0，版权所有");
}

