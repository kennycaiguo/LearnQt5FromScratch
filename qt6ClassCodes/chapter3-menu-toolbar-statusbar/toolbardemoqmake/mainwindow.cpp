#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMenuBar>
#include<QMenu>
#include<QAction>
#include<QFileDialog>
#include<QMessageBox>
#include<QToolBar>
#include<QIcon>
#include<QLabel>
#include<QPixmap>

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
    pNew->setIcon(QIcon(":/images/new.jpg"));
    QAction* pOpen = new QAction("打开");
    pOpen->setIcon(QIcon(":/images/open.png"));
    QAction* pSave = new QAction("保存");
    pSave->setIcon(QIcon(":/images/save.png"));
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
    pCopy->setIcon(QIcon(":/images/copy.png"));
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
    pAbout->setIcon(QIcon(":/images/info.png"));
    pexMenu->addAction(pAbout);

    //工具栏是需要手动创建出来的,自身不会自动创建
    QToolBar* toolBar = new QToolBar();
    //设置工具栏只显示图标
    toolBar->setToolButtonStyle(Qt::ToolButtonIconOnly);
    this->addToolBar(toolBar);
    toolBar->addAction(pNew);
    toolBar->addAction(pOpen);
    toolBar->addAction(pSave);
    toolBar->addAction(pCopy);
    toolBar->addAction(pAbout);
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
