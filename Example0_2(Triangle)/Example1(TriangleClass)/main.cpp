#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QMainWindow>

#include "mainview.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // The main window
    QWidget win;

    QGLFormat format;
    format.setVersion(4,0);
    format.setProfile(QGLFormat::CoreProfile);
    MainView *glView = new MainView(format);
    QVBoxLayout *mainLayout = new QVBoxLayout(&win);
    mainLayout->addWidget(glView);

    win.setLayout(mainLayout);
    win.setWindowTitle("Qt OpenGL Example 1");
    win.show();

    return app.exec();
}

