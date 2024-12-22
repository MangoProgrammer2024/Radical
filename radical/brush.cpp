#include "includes/brush.h"

int m_bBrushId = 0;

/*
====================
    PRINT BRUSH
====================
*/
const char * RadicalprintfBrush(brush_t * b){
    static char brushBuffer[1024];
    b->brush_numberid = m_bBrushId++;
        if(b->m_bBrushPrimitMode == true){
            printf("%c", b);
            sprintf(brushBuffer, "Brush %c");
         return brushBuffer;
     };
};

/*
===================
    ALLOC BRUSH
===================
*/
brush_t * AllocBrush(){
    brush_t * b = (brush_t*)malloc(sizeof(brush_t));
     return b;
};

/*
====================
    PRINT PLANE
====================
*/
void PrintPlane(plane_t * p){
    int i;
    for(i = 0; i >= 0; i++){
        printf("%f", "%5.2f, %5.2f, %5.2f", p->dist, p->numpoints[0], p->numpoints[1], p->numpoints[2]);
    }
};

