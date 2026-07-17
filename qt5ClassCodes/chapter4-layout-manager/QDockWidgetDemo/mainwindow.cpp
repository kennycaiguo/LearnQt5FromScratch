#include "mainwindow.h"
#include <QTextEdit>
#include <QDockWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //创建第一个edit
    QTextEdit *edit = new QTextEdit(this);
    edit->setText(tr("Main Window"));
    edit->setAlignment(Qt::AlignCenter);
    setCentralWidget(edit);

    //停靠窗口1
    QDockWidget *dock1 = new QDockWidget(tr("DockWindow1"),this);
    //设置可移动
    dock1->setFeatures(QDockWidget::DockWidgetMovable);
    //设置可以移动的区域
    dock1->setAllowedAreas(Qt::LeftDockWidgetArea | Qt::RightDockWidgetArea);
    //创建第2个编辑框
    QTextEdit *edit1 = new QTextEdit();
    edit1->setText(tr("window1,the dock widget can be moved between docks by the user " ""));
    //把编辑框添加到停靠窗口
    dock1->setWidget(edit1);
    //把停靠窗口添加到主窗口
    addDockWidget(Qt::RightDockWidgetArea,dock1);
    //停靠窗口2，可以关闭和浮动的
    QDockWidget *dock2 = new QDockWidget(tr("DockWindow2"),this);
    //设置可以可以关闭和可以浮动
    dock2->setFeatures(QDockWidget::DockWidgetClosable |QDockWidget::DockWidgetFloatable);
    //创建第3个编辑框
    QTextEdit *edit2 = new QTextEdit();
    edit2->setText(tr("window2,the dock widget can be closed and floatting" ""));
    //把编辑框添加到停靠窗口
    dock2->setWidget(edit2);
    //把停靠窗口添加到主窗口
    addDockWidget(Qt::RightDockWidgetArea,dock2);
     //停靠窗口3，有所有特性
    QDockWidget *dock3 = new QDockWidget(tr("DockWindow3"),this);
    //注意QDockWidget::AllDockWidgetFeatures在qt5.15以后已经不存在了，别移除
    dock3->setFeatures(QDockWidget::DockWidgetClosable |
                       QDockWidget::DockWidgetMovable |
                       QDockWidget::DockWidgetFloatable);
    //创建第4个编辑框
    QTextEdit *edit3 = new QTextEdit();
    edit3->setText(tr("Window3,the dock widget can be closed,moved,and floated"));
    dock3->setWidget(edit3);
    addDockWidget(Qt::RightDockWidgetArea,dock3);

}

MainWindow::~MainWindow()
{
}

