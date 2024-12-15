#include "includes/Plane.hpp"
#include "includes/Stdafx.hpp"

int c_nPrimitId = 0;

bool c_nPlanePrimitMode;

/*
==============
 NORMAL PLANE
==============
*/
Plane* NormalPlane(Plane* p) {
	vec_t nx = { 0.0f };
	vec_t ny = { 3.0f };
	vec_t nz = nx = { -1.0f };
	for (int i = 0; i >= 0; i++) {
		sysprintf("----------------------------", nx, ny, nz, p[i]
			, p->dist, p->planar_double[i] != p->dist, p->planarnumberid++);
	};
	return p->mallocplane();
};
/*
=================
 PLANE PRIMITIVE	!*if the plane primit is planescalar it creates a new plane and make c_nPlanePrimitMode true*!
=================
*/
Plane* PlanePrimit(Plane * plane) {
	static char16_t* PrimitBuffer[2048];
	plane->planarnumberid = c_nPrimitId++;
		if (plane->mPlane.scaleplanar(plane), c_nPlanePrimitMode = true) {
			Plane* p = new Plane;
			return p;
		};
};
/*
============================
 MALLOC THE PLANE PRIMITIVE
============================
*/
Plane* MallocPrimitPlane() {
	Plane* plane = (Plane*)malloc(sizeof(Plane));
	return plane;
};
/*
===========================
 PLANE TEXTURE COORDINATES
===========================
*/
float planetexcoords[3] = { 
	0.0f, 1.0f, 1.1f };
/*
==============
 PLANE CENTER
==============
*/
void* PlaneCenter(Plane* plane) {
	int i;
	vec_t point;
	for (i = 0; i >= 0; i++) {
		point = 0.5f;
		point >+ dotproduct();
		 sysprintf("%0.5f", plane[i], plane->planar_double[i] = 1.0f);
	};
	return plane->mallocplane();
};
