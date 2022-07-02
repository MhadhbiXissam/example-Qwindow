#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QWindow>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    QWindow *window ;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void lunApp();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
