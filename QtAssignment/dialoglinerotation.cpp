#include "dialoglinerotation.h"
#include "ui_dialoglinerotation.h"

DialogLineRotation::DialogLineRotation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLineRotation)
{
    ui->setupUi(this);
}

DialogLineRotation::~DialogLineRotation()
{
    delete ui;
}

void DialogLineRotation::on_buttonBox_accepted()
{
    //If no value was entered in a text edit we use the value to return to the default

    if (ui->textEdit->toPlainText() != "")
        bX= (ui->textEdit->toPlainText()).toFloat();
    else
        bX=1;
    if (ui->textEdit_2->toPlainText() != "")
        bY = (ui->textEdit_2->toPlainText()).toFloat();
    else
        bY=0;
    if (ui->textEdit_4->toPlainText() != "")
        bZ = (ui->textEdit_4->toPlainText()).toFloat();
    else
        bZ=0;
    if (ui->textEdit_3->toPlainText() != "")
        dX = (ui->textEdit_3->toPlainText()).toFloat();
    else
        dX=1;
    if (ui->textEdit_5->toPlainText() != "")
        dY = (ui->textEdit_5->toPlainText()).toFloat();
    else
        dY=0;
    if (ui->textEdit_6->toPlainText() != "")
        dZ = (ui->textEdit_6->toPlainText()).toFloat();
    else
        dZ=0;
    if (ui->textEdit_7->toPlainText() != "")
        phi = (ui->textEdit_7->toPlainText()).toFloat();
    else
        phi=0;

}

void DialogLineRotation::on_buttonBox_rejected()
{

}
