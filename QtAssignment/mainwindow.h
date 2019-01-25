#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainview.h"
#include "ui_mainwindow.h"

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

    //Opens the view position dialog
    void on_actionView_position_triggered();
    //Opens the line rotation dialog
    void on_actionLine_rotation_triggered();
    //Make the view be the default position
    void on_actionDefault_position_triggered();

    void on_actionDefault_rotation_triggered();

private:
    Ui::MainWindow *ui;
    MainView* view;
    float angle;

    //These values are recuperated from the user and sent to change the scene
    float eX, eY, eZ, directX, directY, directZ;
    float bX, bY, bZ, dX, dY, dZ, phi;
};

#endif // MAINWINDOW_H
