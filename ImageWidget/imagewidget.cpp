#include "imagewidget.h"
#include "ui_imagewidget.h"

ImageWidget::ImageWidget(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ImageWidget)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap("escher.jpg"));
}

ImageWidget::~ImageWidget()
{
    delete ui;
}
