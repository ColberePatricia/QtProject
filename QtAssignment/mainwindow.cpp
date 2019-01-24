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

    if(dvposition.exec()==QDialog::Accepted){
        this->eX = dvposition.eX;
        this->eY = dvposition.eY;
        this->eZ = dvposition.eZ;
        this->directX = dvposition.directX;
        this->directY = dvposition.directY;
        this->directZ = dvposition.directZ;
    }

    view->updateView(eX, eY, eZ, directX, directY, directZ);
}

void MainWindow::on_actionLine_rotation_triggered()
{
    DialogLineRotation dlrot;
    dlrot.setModal(true);

    if(dlrot.exec()==QDialog::Accepted){
        this->bX = dlrot.bX;
        this->bY = dlrot.bY;
        this->bZ = dlrot.bZ;
        this->dX = dlrot.dX;
        this->dY = dlrot.dY;
        this->dZ = dlrot.dZ;
        this->phi = dlrot.phi;
    }

    view->rotateModel(bX, bY, bZ, dX, dY, dZ, phi);
}

void MainWindow::on_actionDefault_position_triggered()
{
    view->updateView(0,0,2,0,0,0);
}




void MainWindow::on_actionDefault_rotation_triggered()
{
    view->rotateModel(1, 0, 0, 1, 0, 0, 0);
}
