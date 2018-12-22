#ifndef MAINVIEW_H
#define MAINVIEW_H

#include "C:/glew-2.0.0/include/GL/glew.h"

#include <QGLWidget>


class MainView : public QGLWidget
{
public:
    MainView( const QGLFormat & format, QWidget *parent = 0 );

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    void createVBO();
    void initScene();
};

#endif // MAINVIEW_H
