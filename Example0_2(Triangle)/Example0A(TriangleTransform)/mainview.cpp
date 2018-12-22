#include "mainview.h"
#include "glutils.h"
#include <iostream>
#include <cstdio>
using std::cout;
using std::endl;

using glm::mat4;
using glm::vec3;

#include "C:/glm/glm/gtc/matrix_transform.hpp"

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
        "uniform mat4 RotationMatrix;"
        "void main () {"
        "	gl_Position = RotationMatrix * vec4(vpoint, 1.0);"
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
    shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, frag_shader);
    glAttachShader(shaderProgram, vert_shader);
    glLinkProgram(shaderProgram);
    glUseProgram(shaderProgram);
    createVBO();
}

void MainView::createVBO()
{
    GLuint vao;
    GLuint vbo[2];
    /* geometry to use. these are 3 xyz points (9 floats total) to make a triangle */
    GLfloat points[] = {
        -0.4f, -0.4f, 0.0f,
         0.4f, -0.4f, 0.0f,
         0.0f,  0.4f, 0.0f,
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

    mat4 rot = glm::rotate(mat4(1.0f),3.14159f/2.0f,vec3(0.0f, 0.0f, 1.0f));
    mat4 trs = glm::translate(mat4(1.0f),vec3(0.5f, 0.0f, 0.0f));

    rot = rot * trs;

	/* The commands glUniformMatrix{2|3|4}fv are used to modify a matrix or an array of matrices.
	The numbers in the command name are interpreted as the dimensionality of the matrix.
	The number 2 indicates a 2 × 2 matrix (i.e., 4 values), the number 3 indicates a 3 × 3 matrix
	(i.e., 9 values), and the number 4 indicates a 4 × 4 matrix (i.e., 16 values).
	Each matrix is assumed to be supplied in column major order.
	The second argument indicates the number of matrices to be passed.
	A value of 1 should be used if modifying the value of a single matrix,
	and a count greater than 1 can be used to modify an array of matrices.

	loc specifies the location of the uniform value to be modified.

	1 specifies the number of matrices that are to be modified.
	This should be 1 if the targeted uniform variable is not an array of matrices,
	and 1 or more if it is an array of matrices.

	GL_FALSE specifies not to transpose the matrix as the values are loaded into the uniform variable.
	Must be GL_FALSE.

	&m[0][0] specifies a pointer to an array of 1 value that will be used to update the specified
	uniform variable. */

    int loc = glGetUniformLocation(shaderProgram,"RotationMatrix");
	if (loc >= 0)
	{
		glUniformMatrix4fv(loc, 1, GL_FALSE, &rot[0][0]);
	}
}


