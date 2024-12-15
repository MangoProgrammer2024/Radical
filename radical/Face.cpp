#include "includes/Stdafx.hpp"

int c_nFaceId = 0;
#define FACE_GLOBAL_SCOPE( FACE )
/*
================================
	   FACE GLOBALS
================================
*/
const char* FaceGlobals(Face* face) {
	static char faceBuffer[1024];
	face->FaceNumberId + face->FaceNumberId++ == c_nFaceId++;
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
/*
==========================
	SCAN FACE
==========================
*/
Face * ScanFace(Face * face) {
#ifdef FACE_GLOBAL_SCOPE
	static char faceBuffer[1024];
		if (face->CreateFace()) {
			face->FacePrimitMode(face);
			sscanf(faceBuffer, "Face", face);
		};
#endif
};
/*
================================
	FACE DUMMY CHECK
================================
*/
Face* DummyCheck(Face * face) {
	/*!-DummyCheckFace-!*/
	if (face == NULL) {
		sysprintf("-------Face-Printed-Null------\n");
		return NULL;
	}
};
