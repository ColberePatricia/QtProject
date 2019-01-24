#ifndef DIALOGVIEWPOSITION_H
#define DIALOGVIEWPOSITION_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class DialogViewPosition;
}

class DialogViewPosition : public QDialog
{
    Q_OBJECT

public:
    explicit DialogViewPosition(QWidget *parent = nullptr);
    ~DialogViewPosition();
    //These values are recuperated from the user
    float eX, eY, eZ, directX, directY, directZ;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::DialogViewPosition *ui;
};

#endif // DIALOGVIEWPOSITION_H
