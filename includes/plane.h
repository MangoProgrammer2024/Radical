#ifndef PLANE_H
#define PLANE_H

#include "libs/mathlib.h"

class plane_t{
public:

    plane_t();
    virtual ~plane_t();

    double dist = 0.5f;

    vec3_t pvecs;
    vec3_t plane_t_origin;

    vec3_t planerads_angle;

    int numpoints;
    int windingpoints;

    plane_t * current;

    int maxpoints[8][5];

};

#endif // PLANE_H
