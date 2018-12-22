#ifndef MYLABEL_H
#define MYLABEL_H

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>

class MyLabel : public QLabel
{
    Q_OBJECT
public:
    explicit MyLabel(QWidget *parent = 0);

    void mouseMoveEvent(QMouseEvent* ev);
    void mousePressEvent(QMouseEvent* ev);
    void leaveEvent(QEvent* ev);

    int x, y;

signals:
    void Mouse_Pressed();
    void Mouse_Pos();
    void Mouse_Left();

public slots:
};

#endif // MYLABEL_H
