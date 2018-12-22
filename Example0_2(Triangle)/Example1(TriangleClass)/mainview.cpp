#include "mainview.h"
#include "scenebasic.h"
#include "glutils.h"
#include <iostream>
#include <cstdio>
using std::cout;
using std::endl;


MainView::MainView(const QGLFormat & format, QWidget *parent) : QGLWidget(format, parent)
{
    this->setMinimumSize(800,600);
}

void MainView::initializeGL() {

    //////////////// PLUG IN SCENE HERE /////////////////
    scene = new SceneBasic();
    ////////////////////////////////////////////////////

    GLenum err = glewInit();
    if( GLEW_OK != err )
    {
        cout <<"Error initializing GLEW: " << glewGetErrorString(err) << endl;
    }
   // GLUtils::checkForOpenGLError(__FILE__,__LINE__);
     GLUtils::checkForOpenGLError();

    QGLFormat format = this->format();
    printf("QGLFormat reports profile: ");
    if( format.profile() == QGLFormat::CompatibilityProfile )
        printf("compatability.\n");
    else if( format.profile() == QGLFormat::CoreProfile )
        printf("core.\n");
    else
        printf("none.\n");

    GLUtils::dumpGLInfo();

    glClearColor(0.0f,0.0f,0.0f,1.0f);

    scene->initScene();
}

void MainView::paintGL() {
    GLUtils::checkForOpenGLError();
    scene->render();
}

void MainView::resizeGL(int w, int h ) {
    scene->resize(w,h);
}

