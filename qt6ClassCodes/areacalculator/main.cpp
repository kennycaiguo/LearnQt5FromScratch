#include "dialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.show();
    return a.exec(); //这个是正确的写法，它会启动循环等待用户的操作
    //return 0; //这里不能够怎么写，重新会一闪而过，没有任何界面显示，因为这一句代码没有启动事件循环
}
