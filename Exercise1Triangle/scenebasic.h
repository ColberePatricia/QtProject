#ifndef SCENEBASIC_H
#define SCENEBASIC_H

#include "scene.h"
#include "C:/glew-2.1.0/include/GL/glew.h"
#include "glslprogram.h"
#include "C:/glm/glm/glm.hpp"
using glm::mat4;

class SceneBasic : public Scene
{
private:
    int width, height;
    GLuint vboHandles[2];
    GLuint vaoHandle;
    GLSLProgram prog;

    void readData(const char* fname);
    void CreateVBO();

    float positionData[27];
    float colorData[27];

public:
    SceneBasic();

    void initScene();
    void render();
    void resize(int, int);
    void update( float t );


	void printActiveUniforms(GLuint programHandle);
	void printActiveAttribs(GLuint programHandle);
};

#endif // SCENEBASIC_H
