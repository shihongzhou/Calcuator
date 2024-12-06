#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void IoTextSet();

private slots:
    // 槽函数：处理按钮点击事件
    void onButtonClick();
private:
    Ui::MainWindow *ui;
    int m_numCount = 1;
};
#endif // MAINWINDOW_H
