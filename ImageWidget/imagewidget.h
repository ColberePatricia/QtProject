#ifndef IMAGEWIDGET_H
#define IMAGEWIDGET_H

#include <QMainWindow>

namespace Ui {
class ImageWidget;
}

class ImageWidget : public QMainWindow
{
    Q_OBJECT

public:
    explicit ImageWidget(QWidget *parent = nullptr);
    ~ImageWidget();

private:
    Ui::ImageWidget *ui;
};

#endif // IMAGEWIDGET_H
