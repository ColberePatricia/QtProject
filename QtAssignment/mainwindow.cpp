#include "mainwindow.h"
#include "dialoglinerotation.h"
#include "dialogviewposition.h"
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

void MainWindow::on_actionView_position_triggered()
{
    DialogViewPosition dvposition;
    dvposition.setModal(true);
    dvposition.exec();

}

void MainWindow::on_actionLine_rotation_triggered()
{
    DialogLineRotation dlrot;
    dlrot.setModal(true);
    dlrot.exec();
}

void MainWindow::on_actionDefault_position_triggered()
{
    view->updateView(0,0,2,0,0,0);
}


void MainWindow::lineRotation(float bX, float bY, float bZ, float dX, float dY, float dZ, float phi){
    this->bX = bX;
    this->bY = bY;
    this->bZ = bZ;
    this->dX = dX;
    this->dY = dY;
    this->dZ = dZ;
    this->phi = phi;
    view->rotateModel(bX, bY, bZ, dX, dY, dZ, phi);
}
void MainWindow::viewPosition(float eX, float eY, float eZ, float directX, float directY, float directZ){
    this->eX = eX;
    this->eY = eY;
    this->eZ = eZ;
    this->directX = directX;
    this->directY = directY;
    this->directZ = directZ;
    view->setAngle(eX);
    //view->updateView(eX, eY, eZ, directX, directY, directZ);
}


