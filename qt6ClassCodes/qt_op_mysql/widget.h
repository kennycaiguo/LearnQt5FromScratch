#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include<QTableWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void connectMysqlDb();

private slots:
    void on_tbWidget_clicked(const QModelIndex &index);

private:
    Ui::Widget *ui;
    QSqlDatabase m_db;
};
#endif // WIDGET_H
