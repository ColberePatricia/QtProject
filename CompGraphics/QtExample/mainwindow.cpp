#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::button1Pressed(){
    ui->label->setText("Button1");
}

void MainWindow::button2Pressed(){
    ui->label->setText("Button2");
}