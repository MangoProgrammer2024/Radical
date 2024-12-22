#ifndef CAMERA_H
#define CAMERA_H

#include "libs/mathlib.h"

class camera_t{
public:

    camera_t();
    virtual ~camera_t();

    camera_t * current_scene;
    camera_t * current_camera;

    double Max = 1025.0f;
    float Near = 45.0f;
    void AddRenderScene(camera_t * c);
    vec3_t up;
    vec3_t down;
    vec3_t left;
    vec3_t right;
    vec3_t position;

};


#endif // CAMERA_H
