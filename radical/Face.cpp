#include "includes/Stdafx.hpp"

int c_nFaceId = 0;

/*
================================
	   FACE GLOBALS
================================
*/
const char* FaceGlobals(Face* face) {
	static char faceBuffer[1024];
	face->planarnumberid + face->planarnumberid++ == c_nFaceId++;
	if (face->GlobalFacePrimit.GlobalPrimitMode(face)) {
		sysprintf("Face", face, FaceGlobals);
		sprintf(faceBuffer, "Face", FaceGlobals);

		return faceBuffer;
	};

};
/*
============================
	MALLOC FACE
============================
*/
Face* AllocFace() {
	Face* f = (Face*)malloc(sizeof(Face));
	return f;
};

