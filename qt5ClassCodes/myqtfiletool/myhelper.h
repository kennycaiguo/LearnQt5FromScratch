#ifndef MYHELPER_H
#define MYHELPER_H

#include <QObject>
#include<QFileDialog>

class MyHelper : public QObject
{
    Q_OBJECT
public:
    explicit MyHelper(QObject *parent = nullptr);
    //获取选中的文件名的静态方法
    static QString getOpenFileName();
    //配置开机启动功能
    static void autoRunApp(bool isAuto,QString appName,QString appPath);
    //验证ip地址是否正确的功能
    static bool verifyIp(QString strIp);

signals:

};

#endif // MYHELPER_H
