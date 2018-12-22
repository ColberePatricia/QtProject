#ifndef MAINVIEW_H
#define MAINVIEW_H

#include "C:/glew-2.0.0/include/GL/glew.h"

#include <QGLWidget>
#include "scene.h"

class MainView : public QGLWidget
{
private:
    Scene *scene;
public:
    MainView( const QGLFormat & format, QWidget *parent = 0 );

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
};

#endif // MAINVIEW_H
