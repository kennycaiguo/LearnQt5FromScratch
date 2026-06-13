#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QDialog>
#include<QWebSocketServer>
#include<QtWebSockets>
#include<QHostAddress>

QT_BEGIN_NAMESPACE
namespace Ui { class MainDialog; }
QT_END_NAMESPACE

class MainDialog : public QDialog
{
    Q_OBJECT

public:
    MainDialog(QWidget *parent = nullptr);
    ~MainDialog();

private:
    Ui::MainDialog *ui;
    QWebSocketServer* mpSktServer; //服务器指针
    QList<QWebSocket*> mClients; //存储客户端地址
    QWebSocket* mpSocket; //socket指针
    QDateTime* mpCurrDateTime; //日期时间成员指针
private Q_SLOTS:
    void onNewConnection();
    void onDisconnect();
    void proTextMsg(QString msg);
    void on_btnStart_clicked();
    void on_btnStop_clicked();
    void on_btnSend_clicked();
};
#endif // MAINDIALOG_H
