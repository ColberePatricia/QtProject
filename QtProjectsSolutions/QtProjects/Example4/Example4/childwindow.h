#ifndef CHILDWINDOW_H
#define CHILDWINDOW_H

#include <QtGui>
#include <QWidget>
#include <QMdiSubWindow>

#include "mywidget.h"

class ChildWindow : public QMdiSubWindow
{
public:
    ChildWindow(QWidget* parent);
    ~ChildWindow();

private:
    MyWidget* myWidget;
};

#endif // CHILDWINDOW_H
