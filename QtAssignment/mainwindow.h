#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void setView(MainView* view);

private slots:
    void on_actionRoty_triggered();

    void on_actionRotx_triggered();

private:
    Ui::MainWindow *ui;
    MainView* view;
    float angle;
};

#endif // MAINWINDOW_H
