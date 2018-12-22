#include <QApplication>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QMainWindow>

#include "mainview.h"

#include "C:/glew-2.0.0/include/GL/glew.h"
#include <string>
using std::string;



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
    win.setWindowTitle("Qt OpenGL Example 0");
    win.show();

    return app.exec();
}


