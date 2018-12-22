#include "mainview.h"
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

    GLenum err = glewInit();
    if( GLEW_OK != err )
    {
        cout <<"Error initializing GLEW: " << glewGetErrorString(err) << endl;
    }
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

    glClearColor(0.3f,0.3f,0.3f,1.0f);
    initScene();
}

void MainView::paintGL() {
    GLUtils::checkForOpenGLError();
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glDrawArrays(GL_TRIANGLES, 0, 3);
}

void MainView::resizeGL(int w, int h ) {
    glViewport(0,0,w,h);
}


void MainView::initScene()
{
    /* these are the strings of code for the shaders
    the vertex shader positions each vertex point */

    const char* vertex_shader =
    "#version 410\n"
    "in vec3 vpoint;"
    "in vec3 vcolor;"
    "out vec3 Color;"
    "void main () {"
    "	gl_Position = vec4(vpoint, 1.0);"
    "   Color = vcolor;"
    "}";

    /* the fragment shader colours each fragment (pixel-sized area of the
    triangle) */

    const char* fragment_shader =
    "#version 410\n"
    "in vec3 Color;"
    "out vec4 frag_colour;"
    "void main () {"
    "	frag_colour = vec4(Color, 1.0);"
    "}";

    /* GL shader objects for vertex and fragment shader [components] */
    GLuint vert_shader, frag_shader;
    /* GL shader programme object [combined, to link] */
    GLuint shader_programme;


	/* The OpenGL Extension Wrangler Library (GLEW) is a cross-platform
	open-source C/C++ extension loading library. GLEW provides efficient
	run-time mechanisms for determining which OpenGL extensions are supported
	on the target platform.

	if you link with some function - it must exist on target platform,
	or your program wouldn't launch. GLEW handles that - you're not linking
	with GL functions directly, but instead getting function pointers after
	initialization phase. It allows you to check at runtime which extensions
	are present and which functions may be used.

	GLEW obtains information on the supported extensions from the graphics driver.
	Experimental or pre-release drivers, however, might not report every available
	extension through the standard mechanism, in which case GLEW will report
	it unsupported. To circumvent this situation, the glewExperimental global switch
	can be turned on by setting it to GL_TRUE before calling glewInit(), which ensures
	that all extensions with valid entry points will be exposed. */

    /* start GLEW extension handler */
    glewExperimental = GL_TRUE;
    glewInit();


    /* tell GL to only draw onto a pixel if the shape is closer to the viewer
    than anything already drawn at that pixel */
    glEnable(GL_DEPTH_TEST); /* enable depth-testing */
    /* with LESS depth-testing interprets a smaller depth value as meaning "closer" */
    glDepthFunc(GL_LESS);


    /* here we copy the shader strings into GL shaders, and compile them. we
    then create an executable shader 'program' and attach both of the compiled
    shaders. we link this, which matches the outputs of the vertex shader to
    the inputs of the fragment shader, etc. and it is then ready to use */
    vert_shader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vert_shader, 1, &vertex_shader, NULL);
    glCompileShader(vert_shader);
    frag_shader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(frag_shader, 1, &fragment_shader, NULL);
    glCompileShader(frag_shader);
    shader_programme = glCreateProgram();
    glAttachShader(shader_programme, frag_shader);
    glAttachShader(shader_programme, vert_shader);
    glLinkProgram(shader_programme);
    glUseProgram(shader_programme);
    createVBO();
}

void MainView::createVBO()
{
    GLuint vao;
    GLuint vbo[2];
    /* geometry to use. these are 3 xyz points (9 floats total) to make a triangle */
    GLfloat points[] = {
        -0.8f, -0.8f, 0.0f,
         0.8f, -0.8f, 0.0f,
         0.0f,  0.8f, 0.0f,
    };

    GLfloat color[] = {
        1.0f, 0.0f, 0.0f,
        0.0f, 1.0f, 0.0f,
        0.0f, 0.0f, 1.0f
    };

	/* a vertex buffer object (VBO) is created here. this stores arrays of
	data on the graphics adapter's memory. in our case - the vertex points and colors */
    glGenBuffers(2, vbo);
    glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
    glBufferData (GL_ARRAY_BUFFER, 9 * sizeof(float), points, GL_STATIC_DRAW);

    glBindBuffer(GL_ARRAY_BUFFER, vbo[1]);
    glBufferData (GL_ARRAY_BUFFER, 9 * sizeof(float), color, GL_STATIC_DRAW);

	/* the vertex array object (VAO) is a little descriptor that defines which
	data from vertex buffer objects should be used as input variables to vertex
	shaders. in our case - use our two VBOs, and say 'every three floats is a
	variable' */
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);

    glEnableVertexAttribArray(0); //  explicitly specify which VBO's data the following vertex attribute pointer refers to
    glBindBuffer(GL_ARRAY_BUFFER, vbo[0]);
    // "attribute #0 is created from every 3 variables in the above buffer, of type float (i.e. vec3s)"
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, NULL);
    glEnableVertexAttribArray(1);
    glBindBuffer(GL_ARRAY_BUFFER, vbo[1]);
    // "attribute #1 is created from every 3 variables in the above buffer, of type float (i.e. vec3s)"
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 0, NULL);
}


