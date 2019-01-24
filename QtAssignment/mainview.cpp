#include "mainview.h"
#include <QDebug>
using std::cout;
using std::endl;


MainView::MainView(const QGLFormat & format, QWidget *parent) : QGLWidget(format, parent)
{
    // This tells the widget to accept keyboard focus when the widget is clicked.
    this->setFocusPolicy(Qt::ClickFocus);

    timer = new QTimer(this);
    connect( timer, SIGNAL(timeout()), this, SLOT(timerUpdate()) );
    timer->start(50);

    this->setMinimumSize(800,600);
}


void MainView::setAngle(float angle)
{
    //this->angle = angle;
    qDebug()<<"READ angle "<<angle;
    scene->setAngle(angle);

    qDebug()<<"painting gl "<<angle;
    paintGL();
}

void MainView::updateView(float eX, float eY, float eZ, float directX, float directY, float directZ)
{
    qDebug()<<"READ eX "<<eX;
    this->eX = eX;
    /*qDebug()<<"READ eX "<<this->eX;
    this->eY = eY;
    this->eZ = eZ;
    this->directX = directX;
    this->directY = directY;
    this->directZ = directZ;*/
    //scene->updateView(eX, eY, eZ, directX, directY, directZ);
    this->angle = eX;
    qDebug()<<"READ eX "<<eX;
    scene->setAngle(eX);
    //paintGL();
}


void MainView::rotateModel(float bX, float bY, float bZ, float dX, float dY, float dZ, float phi){
    /*this->bX = bX;
    this->bY = bY;
    this->bZ = bZ;
    this->dX = dX;
    this->dY = dY;
    this->dZ = dZ;
    this->phi = phi;*/
    //scene->rotateModel(bX, bY, bZ, dX, dY, dZ, phi);
    //paintGL();
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

void MainView::takeScreenShot() {
    QImage img = this->grabFrameBuffer(true);
    img.save("screen.png", "PNG");
}

void MainView::toggleAnimation() {
    if( timer->isActive() )
        timer->stop();
    else
        timer->start();
}

void MainView::timerUpdate() {
    scene->update(1.0f);
    updateGL();
}

