#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QWidget>
#include<QWindow>
#include<QVBoxLayout>
#include <QProcess>
#include<QStringList>
#include <QDebug>
#include <QTime>
#include<QCoreApplication>

void delay( int millisecondsToWait )
{
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);




    /*
    // proces now is available
    window = QWindow::fromWinId(96469007);
    window->setFlags(Qt::FramelessWindowHint);

    QWidget *widget = QWidget::createWindowContainer(window);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(widget);
    this->setLayout(layout);
    */
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::lunApp()
{
    /*
    // start process :
    QProcess program;
    qint64 pid_program ;
    program.start("subl", QStringList() << "/home/issam/Desktop/codes/luaPy/script.py" );
    auto isStarted = program.waitForStarted() ;


    // get the the window id of program :
    QProcess get_win_id_program;
    QStringList args_get_win_id ;
    args_get_win_id  << "search" << " --pid " << QString::number(get_win_id_program.pid()) ;
    qDebug() << args_get_win_id ;
    get_win_id_program.start("xdotool", args_get_win_id);
    isStarted = get_win_id_program.waitForStarted() ;
    get_win_id_program.waitForBytesWritten();
    QString output(get_win_id_program.readAllStandardOutput());
    qDebug() << output ;
    */
    window = QWindow::fromWinId(88080428);
    window->setFlags(Qt::FramelessWindowHint);

    QWidget *widget = QWidget::createWindowContainer(window);

    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addWidget(widget);
    this->setLayout(layout);

}

