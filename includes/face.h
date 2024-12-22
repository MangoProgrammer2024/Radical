#ifndef FACE_H
#define FACE_H

#include "libs/mathlib.h"
#include "brush.h"

class face_f{
public:

    face_f();
    virtual ~face_f();

    int numpoints[4];

    vec4_t * vertexpoints;
    vec3_t * face_f_angle;

    bool ChangeVec(face_f *f);

};

#endif // FACE_H
