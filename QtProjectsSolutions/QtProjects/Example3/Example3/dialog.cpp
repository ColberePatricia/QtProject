#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    QImage image("escher.jpg");
    item = new QGraphicsPixmapItem(QPixmap::fromImage(image));
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    scene->addItem(item);
}

Dialog::~Dialog()
{
    delete ui;
}
