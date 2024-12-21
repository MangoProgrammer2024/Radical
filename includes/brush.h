#ifndef BRUSH_H
#define BRUSH_H

#include "face.h"
#include "entity.h"
#include "texture.h"
#include "winding.h"
#include "plane.h"
#include "libs/mathlib.h"

#include <QOpenGLContext>
#include <QToolBar>
#include <QAction>
#include <QMenu>

#define MAX_FACES 16

class brush_t{
public:

    brush_t();
    virtual ~brush_t();

    int brush_numberid;

    vec3_t mins, maxs; vec3_t angle;

    /*
    ====================
        BRUSH STUFF
    ====================
    */

    void Brush_SetEpairMode(brush_t * current, const char * key, const char * value);
    void * Alloc_Brush(brush_t * b);
    void * Brush_ManipPlane(brush_t * b, plane_t * p, bool current_t);
    void Add_BrushToList(brush_t * b, brush_t * brush_list);
    void * Brush_GetWinding(brush_t * b, plane_t * p, winding_t * winding_brush);
    brush_t * split_brush(brush_t * b, face_f * current_face, int split_points);
    void Brush_Cleanup(brush_t * b, face_f * face, plane_t * p, bool Elipson_Poke);
    void Brush_AddTexture(brush_t * b, texture_t * texdef, vec4_t texdef_points, bool add_selected);
    void Brush_CallbackTextureSignal(brush_t * b, texture_t * t, texture_t * previous, bool callbackTexture);
    void Save_Brush(brush_t * b, face_f * currentface, plane_t * currentplane, const char * key, const char * value, std::size_t * brushsize);
    void Brush_Deconstruct(brush_t * b);
    void Brush_CallbackSize(brush_t * b, std::size_t * brushsize);
    void Brush_Drag(brush_t * b, vec3_t brush_position, bool dragged);
    void Brush_InsertCommandInput(QAction * command, brush_t * b);
    void Brush_ConstructMenu(QMenu * brush_menu, brush_t * b);
    void Brush_ConstructToolbar(QToolBar * brush_toolbar, brush_t * b);
    void Brush_AddToGlContext(QOpenGLContext * brush_glcontext, brush_t * b);
    void * BrushFree(brush_t * freebrush);
    void * BrushPrimit(brush_t * primitbrush);
    enum{
        Free, Winding, Primitive
    }brushmode;

    bool m_bBrushPrimitMode(brush_t& m_bBrush);

};

#endif // BRUSH_H
