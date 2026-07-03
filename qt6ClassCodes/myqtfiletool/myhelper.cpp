#include "myhelper.h"
#include<QSettings>
#include <QHostAddress>


MyHelper::MyHelper(QObject *parent)
    : QObject{parent}
{

}

QString MyHelper::getOpenFileName()
{
   return QFileDialog::getOpenFileName(nullptr, "打开文件", ".",
                                       "所有文件 (*.*);;文本文件 (*.txt);;压缩文件(.zip);;WinRar(.rar);;光盘文件(.iso)");
}

void MyHelper::autoRunApp(bool isAuto, QString appName, QString appPath)
{
   //获取设置开机启动的注册表项
   QSettings* reg = new QSettings("HKEY_LOCAL_MACHINE\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",QSettings::NativeFormat);
   //如果isAuto为true
   if(isAuto){
       reg->setValue(appName,appPath); //在注册表中把我们的应用程序设置为开机启动
   } else {
       reg->setValue(appName," "); //把路径清空，就不能够启动了
   }

}

bool MyHelper::verifyIp(QString strIp)
{
    QHostAddress address;
    return address.setAddress(strIp);
}

