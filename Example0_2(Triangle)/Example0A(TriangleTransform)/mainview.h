#ifndef MAINVIEW_H
#define MAINVIEW_H

#include "C:/glew-2.0.0/include/GL/glew.h"
#include "C:/glm/glm/glm.hpp"
#include <QGLWidget>


class MainView : public QGLWidget
{
private:
      /* GL shader programme object [combined, to link] */
    GLuint shaderProgram;
public:
    MainView( const QGLFormat & format, QWidget *parent = 0 );

    void createVBO();
    void initScene();
protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h); 
};

#endif // MAINVIEW_H
