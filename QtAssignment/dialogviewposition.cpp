#include "dialogviewposition.h"
#include "ui_dialogviewposition.h"
#include <QDebug>

DialogViewPosition::DialogViewPosition(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogViewPosition)
{
    ui->setupUi(this);
}

DialogViewPosition::~DialogViewPosition()
{
    delete ui;
}

void DialogViewPosition::on_buttonBox_accepted()
{
    //If no value was entered for a text edit we enter the default values

    if (ui->textEdit->toPlainText() != "")
        eX = (ui->textEdit->toPlainText()).toFloat();
    else
        eX=0;
    if (ui->textEdit_2->toPlainText() != "")
        eY = (ui->textEdit_2->toPlainText()).toFloat();
    else
        eY=0;
    if(ui->textEdit_4->toPlainText() != "")
        eZ = (ui->textEdit_4->toPlainText()).toFloat();
    else eZ=2;
    if (ui->textEdit_3->toPlainText() != "")
        directX = (ui->textEdit_3->toPlainText()).toFloat();
    else
        directX=0;
    if(ui->textEdit_5->toPlainText() != "")
        directY = (ui->textEdit_5->toPlainText()).toFloat();
    else
        directY=0;
    if(ui->textEdit_6->toPlainText() != "")
        directZ = (ui->textEdit_6->toPlainText()).toFloat();
    else
        directZ=0;

    //qDebug()<<"READ eX "<<ui->textEdit->toPlainText();
    //qDebug()<<"READ eX "<<eX;
    //qDebug()<<"READ eY "<<eY;
    //qDebug()<<"READ eZ "<<eZ;

    MainWindow mw;
    mw.viewPosition(eX, eY, eZ, directX, directY, directZ);
}
