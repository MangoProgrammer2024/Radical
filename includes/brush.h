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

    bool m_bBrushPrimitMode;

    /*---Brush Build Stuff---*/
    Brush_Build( brush_t * brush, int sides, std::size_t * brushsize, const char * key, const char * value, bool buildbrush, int _numberid);
    /*---Brush Draw Stuff---*/
    void Brush_Draw(brush_t * b);
    void BrushDraw_XY(brush_t * b, int iViewType);
    void BrushDraw_ViewType(brush_t * b, int globalViewType);
    //view types for brush
    enum{
        BRUSH_XY,
        BRUSH_YX}iBrushType;

    brush_t&m_bBrushModuleViewObservor;
    /*---Brush Clip Tools---*/
    bool m_bClipBrush(brush_t * b);
    bool m_bClipBrushPlane(brush_t * b, plane_t * p);
    bool m_bClipBrushFace(brush_t * b, face_f * f);
    int * Brush_ClipperTool(brush_t * b, int split_points, bool split_brush_current);

    /*---Brush Manipulation Stuff---*/
    bool Enable_BrushTextureFaceDrag(brush_t * b, face_f * f, texture_t * t);
    void Brush_ScaleTextureWidth(brush_t * b, texture_t * texdef, int ScaleWidth);
    void Brush_ScaleTextureHeight(brush_t * b, texture_t * texdef, int ScaleHeight);
    void * Brush_ChangeSize(brush_t * b, std::size_t * brushNewSize);
    bool Scale_Brush(brush_t * b);
    bool Drag_Brush(brush_t * b);
    bool Rotate_Brush(brush_t * b);

    /*---Brush Types---*/
    enum{ConstructiveBrush,
         ConstructionBrush,
         CaulkBrush,
         HollowBrush
    }m_bBrushType_t;

    //constructive brush is a normal brush in editor and in world
    //construction brush is a brush thats only in the editor it doesn't show or spawn in actual game
    //caulk brush is a brush with automatic applied caulk texture on all faces !*used for stucturing map*!
    //hollow brush is a brush that doesn't have collision in game but is still visible

    bool Brush_IsConstruction(brush_t * b);
    bool Brush_IsConstructive(brush_t * b);
    bool Brush_IsCaulked(brush_t * b);
    bool Brush_IsHollow(brush_t * b);
    virtual void * Construct_Brush(brush_t * b, int mBrushType) = 0;

};

 void sysbrushprintf(brush_t * _b, const char * _format, int _id);

#endif // BRUSH_H
