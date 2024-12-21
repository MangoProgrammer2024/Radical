#ifndef BRUSH_H
#define BRUSH_H

#include "libs/mathlib.h"

#define MAX_FACES 16

class brush_t{
public:

    brush_t();
    virtual ~brush_t();

    int numberid;

    vec3_t mins, maxs;

    vec3_t angle;

};

#endif // BRUSH_H
