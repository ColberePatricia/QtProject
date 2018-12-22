#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QMdiArea>
#include "childwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

   // connect(ui->actionQuit(), SIGNAL(triggered()), this, SLOT(close()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::displayAbout()
{
    QMessageBox::about(this, "Abort", "A simple menu");
}


void MainWindow::createChild()
{
    ChildWindow* childWindow = new ChildWindow(ui->mdiArea);
    childWindow->setAttribute(Qt::WA_DeleteOnClose);
    childWindow->show();
}
