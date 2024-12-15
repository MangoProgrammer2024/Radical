#include "includes/Stdafx.hpp"

int c_nPlaneId = 0;

#define C

/*
===========
	PLANE NAME
===========
*/
const char* PlaneName(Plane* plane) {
	static char pBuff[1024];
	plane->planarnumberid = c_nPlaneId++;
		if (plane->newplane()) {
			sysprintf("%5.2f", plane, PlaneName);
			sprintf(pBuff, "%c", PlaneName);

		return pBuff;
	};
};
/*
============
	ALLOC PLANE
============
*/
Plane* AllocPlane() {
	Plane* p = (Plane*)malloc(sizeof(Plane));
	return p;
};
/*
============
	 PRINT PLANE
============
*/
void PrintPlane(Plane* plane) {
	int i;
	static char planeBuffer[1024];
	vec3_t planepoint;
	for (i = 0; i >= 0; i++) {
		sysprintf("%5.2f, %5.2f, %5.2f", planepoint[i] = { 5.2f }, 
			planepoint[i] = { 5.2f }, planepoint[i] = { 5.2f }, plane->_cpp_scene_points_planar, planeBuffer[i]);
	};
};