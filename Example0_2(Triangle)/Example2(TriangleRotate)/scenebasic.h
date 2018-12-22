#ifndef SCENEBASIC_H
#define SCENEBASIC_H

#include "scene.h"
#include "C:/glew-2.0.0/include/GL/glew.h"
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
    float angle;
    mat4 rotationMatrix;

    void readData(const char* fname);
    void CreateVBO();

    float positionData[9];
    float colorData[9];

public:
    SceneBasic();

    void initScene();
    void render();
    void resize(int, int);
    void update( float t );
    void setMatrices();

	void printActiveUniforms(GLuint programHandle);
	void printActiveAttribs(GLuint programHandle);
};

#endif // SCENEBASIC_H