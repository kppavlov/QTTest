#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    counter++;
    QString *str = new QString();

    str->setNum(counter);
    ui->label->setText(*str);
}

void MainWindow::on_pushButton_2_clicked()
{
    counter = 0;
    QString *str = new QString();

    str->setNum(counter);
    ui->label->setText(*str);
}
