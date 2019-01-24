#ifndef MAINVIEW_H
#define MAINVIEW_H

#include "C:/glew-2.1.0/include/GL/glew.h"

#include <QGLWidget>
#include <QTimer>

#include "scene.h"
#include "scenebasic.h"
#include "glutils.h"
#include <iostream>
#include <cstdio>

class MainView : public QGLWidget
{
    Q_OBJECT

private:
    QTimer *timer;
    Scene *scene;
    float angle;
    // We create the variables we will be manipulating by updating the view and rotating the model
    float eX, eY, eZ, directX, directY, directZ;
    float bX, bY, bZ, dX, dY, dZ, phi;

public:
    MainView( const QGLFormat & format, QWidget *parent = 0 );

protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

public:
    void setAngle(float);
    // Updates the view from the scenebasic class
    void updateView(float eX, float eY, float eZ, float directX, float directY, float directZ);
    // Updates the model from the scenebasic class
    void rotateModel(float bX, float bY, float bZ, float dX, float dY, float dZ, float phi);

public slots:
    void timerUpdate();
    void toggleAnimation();
    void takeScreenShot();

};

#endif // MAINVIEW_H
