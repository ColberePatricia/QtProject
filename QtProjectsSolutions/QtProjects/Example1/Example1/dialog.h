#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMouseEvent>
#include "mylabel.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();

public slots:
    void Mouse_current_pos();
    void Mouse_pressed();
    void Mouse_left();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
