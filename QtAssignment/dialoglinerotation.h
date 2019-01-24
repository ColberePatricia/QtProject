#ifndef DIALOGLINEROTATION_H
#define DIALOGLINEROTATION_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class DialogLineRotation;
}

class DialogLineRotation : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLineRotation(QWidget *parent = nullptr);
    ~DialogLineRotation();
    //These values are recuperated from the user
    float bX, bY, bZ, dX, dY, dZ, phi;

private slots:
    void on_buttonBox_rejected();

    void on_buttonBox_accepted();

private:
    Ui::DialogLineRotation *ui;
};

#endif // DIALOGLINEROTATION_H
