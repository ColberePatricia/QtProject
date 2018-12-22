#include "imagewidget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ImageWidget w;
    w.setWindowFlags(Qt::CustomizeWindowHint);
    w.show();

    return a.exec();
}
