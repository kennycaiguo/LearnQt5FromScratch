#include "fttooldialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FTtoolDialog w;
    w.show();
    return a.exec();
}
