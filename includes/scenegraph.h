#ifndef SCENEGRAPH_H
#define SCENEGRAPH_H

#include "brush.h"

#define MAX_ENTITIES 100000

class SceneGraph{
public:
    SceneGraph();
     virtual ~SceneGraph();

    SceneGraph& m_bSceneGraphSignal;

    int m_SceneGraphId;
    QTimer * sceneTick;
    bool SceneSortEntities(SceneGraph& graph);
    SceneGraph * current_scene, next_scene, previous_scene;
    bool ReachedMax;

    enum{
        IBRUSH, IENTITY, ITEXTURE, IPLANE, IFACE
    }iSceneTypes_n;

    void n_ActivateScene(SceneGraph * graphtick, bool _active);
    virtual void m_bAddEntities(SceneGraph * scene, brush_t * b, entity_t * t, plane_t * p, face_f * f, texture_t * texdef, bool _Maxed) = 0;
    SceneGraph * AllocateScene(){
        SceneGraph * scene = (SceneGraph*)malloc(sizeof(SceneGraph));
        return scene;
    };
    SceneGraph * newScene(){
        SceneGraph * scene = new SceneGraph;
        return scene;
    };
    /*
    ==============================
        ALLOCATE SCENE TYPES
    ==============================
    */
    SceneGraph * Allocate_nTypes(SceneGraph * scene){

        if(scene->iSceneTypes_n = scene->IENTITY){
            entity_t * ent = (entity_t*)malloc(sizeof(entity_t));
            return ent;
        }

        if(scene->iSceneTypes_n = scene->IBRUSH){
            brush_t * b = (brush_t*)malloc(sizeof(brush_t));
            return b;
        }

        if(scene->iSceneTypes_n = scene->ITEXTURE){
            texture_t * t = (texture_t*)malloc(sizeof(texture_t));
            return t;
        }

        if(scene->iSceneTypes_n = scene->IFACE){
            face_f * face = (face_f*)malloc(sizeof(face_f));
            return face;
        }

        if(scene->iSceneTypes_n = scene->IPLANE){
            plane_t * plane = (plane_t*)malloc(sizeof(plane_t));
            return plane;
        }

    };

    std::size_t * m_bSceneSignal_Size;
    SceneGraph * SplitScene(SceneGraph * split_scene);
    SceneGraph * m_bnPrintScene(SceneGraph * sceneprintf);

    template<class m_bSceneGraphList>
    using m_bSceneGraphList = std::list<m_bSceneGraphList, std::allocator<m_bSceneGraphList>>;


};

#endif // SCENEGRAPH_H
