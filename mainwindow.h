#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();   
    void left();
    void right();
    void up();
    void down();
    void start();
    void printout();

private slots:
    void on_restart_clicked();
private:

    Ui::MainWindow *ui;
    void keyPressEvent(QKeyEvent *event);
};

#endif // MAINWINDOW_H
