#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QComboBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QComboBox* m_cb;
public slots:
    void onIndexChanged(int idx);
    void fontIndexChanged(int idx);
private slots:
    void on_btnDel_clicked();
    void on_fontComboBox_currentFontChanged(const QFont &f);
};
#endif // MAINWINDOW_H
