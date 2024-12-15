#include "includes/Plane.hpp"
#include "includes/Stdafx.hpp"

int c_nPrimitId = 0;

bool c_nPlanePrimitMode;

Plane* PlanePrimit(Plane * plane) {
	static char16_t* PrimitBuffer[2048];
	plane->planarnumberid = c_nPrimitId++;
		if (plane->mPlane.scaleplanar(plane), c_nPlanePrimitMode = true) {
			Plane* p = new Plane;
				return p;
		};
};

Plane* MallocPrimitPlane() {
	Plane* plane = (Plane*)malloc(sizeof(Plane));
	return plane;
};
