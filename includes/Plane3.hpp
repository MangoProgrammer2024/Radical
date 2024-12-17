//Plane3.hpp
#ifndef PLANE3_HPP
#define PLANE3_HPP

class Plane3{
public:

Vector nx;
Vector ny;
Vector nz;

double dist = 0.5f;
Plane3(nx, ny, nz, dist);
//plane typedef classes
typedef class<Plane3>plane3;


};

#endif
