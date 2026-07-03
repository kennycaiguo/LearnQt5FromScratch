#ifndef FTTOOLDIALOG_H
#define FTTOOLDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class FTtoolDialog; }
QT_END_NAMESPACE

class FTtoolDialog : public QDialog
{
    Q_OBJECT

public:
    FTtoolDialog(QWidget *parent = nullptr);
    ~FTtoolDialog();

private slots:
    void on_btn_send_clicked();

    void on_btn_choose_clicked();

    void on_btn_listen_clicked();

private:
    Ui::FTtoolDialog *ui;
};
#endif // FTTOOLDIALOG_H
