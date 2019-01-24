#ifndef SCENE_H
#define SCENE_H
#define GLM_ENABLE_EXPERIMENTAL

class Scene
{
public:
    /**
      Load textures, initialize shaders, etc.
      */
    virtual void initScene() = 0;

    /**
      This is called prior to every frame.  Use this
      to update your animation.
      */
    virtual void update( float t ) = 0;

    /**
      Draw your scene.
      */
    virtual void render() = 0;

    /**
      Called when screen is resized
      */
    virtual void resize(int, int) = 0;

    virtual void setAngle(float) = 0;

    virtual void updateView(float eX, float eY, float eZ, float directX, float directY, float directZ) = 0;
    virtual void rotateModel(float bX, float bY, float bZ, float dX, float dY, float dZ, float phi) = 0;

};

#endif // SCENE_H
