#ifndef BRUSH_H
#define BRUSH_H

#include "libs/mathlib.h"

class brush_t{
public:

    brush_t();
    virtual ~brush_t();

    int numberid;

    vec3_t mins, maxs;

    vec3_t angle;

    #define MAX_FACES 16

};

#endif // BRUSH_H
