#pragma once
#ifndef PLANE_HPP
#define PLANE_HPP

#include <string>
#include <malloc.h>

class Plane {
public:
	//consturct plane
	Plane();
	//deconstruct plane
	~Plane();
	Plane& mPlane;
	/*---plane number id---*/
	int planarnumberid;
	/*---plane double sided point---*/
	double planar_double[2];
	/*
	============
		SHADE PLANE
	============
	*/
	void PlaneShader(Plane * p, const char * shaderNameFile, bool Shader);
	/*---planar points in scene*/
	/*
		!*match with a vec3_t float variable*!
	*/
		float _cpp_scene_points_planar;
		bool scaleplanar(Plane* p);/*scale plane t or f*/

		/*---malloc plane---*/
		Plane* mallocplane() {
			Plane* p = (Plane*)malloc(sizeof(Plane));
			return p;
		}
		/*---create new plane---*/
		Plane* newplane() {
			Plane* plane = new Plane;
			return plane;
		};

		/*
		===============
			PLANE PRINT INFO
		===============
		*/
		void PrintPlaneinfo(Plane* p, const char* planeName, std::FILE * PlaneToken, const char * PlaneTxt) {
			p->mallocplane();
			fprintf(PlaneToken, planeName, PlaneTxt = "<origin>(Plane * p)");
				p->planarnumberid++;
		};

		virtual void PlaneTexture();
		void PlaneSet_Epair(const char* PLANE, int _ID);
};


#endif