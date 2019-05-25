#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int counter = 0;
    void RenderUi();


    // mandatory widgets to construct the UI
    QPushButton *button_incr;
    QPushButton *button_zero;
    QLabel *label;

    // styles

private slots:
    void push_button_increment_on_click();
    void push_button_zero_on_click();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
