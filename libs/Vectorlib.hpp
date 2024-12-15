#pragma once
#ifndef VECTORLIB_HPP
#define VECTORLIB_HPP

typedef float vec_t;
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];
typedef vec_t vec6_t[6];

vec3_t origin = { 0.0f, 0.0f, 0.0f };

vec_t point = { 0.0f };

float fabs;

vec_t dotproduct() {
	vec_t dot(fabs);
	if ( dot >= fabs ) {
		point* dot / point;
		point = origin;
		return dot;
		}
};

#endif
