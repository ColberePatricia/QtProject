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
    //If no value was entered in a text edit no tranformation is made for the corresponding value

    if (ui->textEdit->toPlainText() != "")
        bX= (ui->textEdit->toPlainText()).toFloat();
    else
        bX=0;
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
        dX=0;
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

    MainWindow mw;
    mw.lineRotation(bX, bY, bZ, dX, dY, dZ, phi);
}

void DialogLineRotation::on_buttonBox_rejected()
{

}
