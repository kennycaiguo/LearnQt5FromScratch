#include "mainwindow.h"
#include <QApplication>
#include <QFont>
#include <QSplitter>
#include <QTextEdit>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFont font("华文行楷",14);
    a.setFont(font);
    //主分割窗口
    QSplitter *splMain = new QSplitter(Qt::Horizontal,0);
    QTextEdit *leftEdit = new QTextEdit(QObject::tr("Left Widget"),splMain);
    leftEdit->setAlignment(Qt::AlignCenter);
    //右分割窗口
    QSplitter *splRight = new QSplitter(Qt::Vertical,splMain);
    splRight->setOpaqueResize(false);
    QTextEdit *upEdit = new QTextEdit(QObject::tr("Top Widget"),splRight);
    upEdit->setAlignment(Qt::AlignCenter);
    QTextEdit *bottomEdit = new QTextEdit(QObject::tr("Bottom Widget"),splRight);
    bottomEdit->setAlignment(Qt::AlignCenter);
    //开始分割
    splMain->setStretchFactor(1,1);
    splMain->setWindowTitle(QObject::tr("Splitter"));
    splMain->show();

    // MainWindow w;
    // w.show();
    return a.exec();
}
