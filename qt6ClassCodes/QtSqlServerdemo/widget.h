#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
//包含数据库相关的头文件
#include<QSqlDatabase>
#include<QSqlQuery>
#include<QSqlError>
#include<QDebug>
#include<QMessageBox>
#include<QSqlTableModel>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_tbview_clicked(const QModelIndex &index);

private:
    Ui::Widget *ui;
    QSqlTableModel *m_model;
    QSqlDatabase m_db;
};
#endif // WIDGET_H
