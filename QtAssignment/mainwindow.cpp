#include "mainwindow.h"
#include "ui_mainwindow.h"
const float PI = 4.0f*atan(1.0f);

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

void MainWindow::setView(MainView* view)
{
    this->view = view;
}

void MainWindow::on_actionRoty_triggered()
{
    angle = PI/4;
    view->setAngle(angle);
}

void MainWindow::on_actionRotx_triggered()
{
    angle = PI/4;
    view->setAngle(angle);
}
