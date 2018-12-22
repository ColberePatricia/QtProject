#include "dialog.h"
#include "ui_dialog.h"


Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->lblMouse,SIGNAL(Mouse_Pos()),this, SLOT(Mouse_current_pos()));
    connect(ui->lblMouse,SIGNAL(Mouse_Pressed()),this, SLOT(Mouse_pressed()));
    connect(ui->lblMouse,SIGNAL(Mouse_Left()),this, SLOT(Mouse_left()));

}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::Mouse_current_pos()
{
    ui->lblMouseCurrentPos->setText(QString("X= %1, Y=%2").arg(ui->lblMouse->x).arg(ui->lblMouse->y));
    ui->lblMouseCurrentEv->setText("mouse Moving");
}
void Dialog::Mouse_pressed()
{
    ui->lblMouseCurrentEv->setText("Mouse Pressed");
}

void Dialog::Mouse_left()
{
    ui->lblMouseCurrentEv->setText("Mouse Left");
}
