#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    button_incr = new QPushButton("&Increment", this);
    button_zero = new QPushButton("&Zero", this);
    label = new QLabel(this);
    connect(button_incr, &QPushButton::pressed, this, &MainWindow::push_button_increment_on_click);
    connect(button_zero, &QPushButton::pressed, this, &MainWindow::push_button_zero_on_click);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::RenderUi() {
    label->setText("Some int");

    button_incr->move(50,50);
    button_zero->move(50,90);
    label->move(150, 70);
    MainWindow::show();
}

void MainWindow::push_button_increment_on_click () {
    counter++;
    label->setNum(counter);
}

void MainWindow::push_button_zero_on_click () {
    counter = 0;
    label->setNum(counter);
}


