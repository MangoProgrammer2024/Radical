#include "includes/Plane.hpp"
#include "includes/Stdafx.hpp"

int c_nPrimitId = 0;

bool c_nPlanePrimitMode;
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
