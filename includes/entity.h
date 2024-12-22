#ifndef ENTITY_H
#define ENTITY_H

#include <string>
#include "brush.h"
#include <QToolBar>
#include <QMenu>
#include <QAction>

class entity_t{
public:

    entity_t();
    virtual ~entity_t();

    int g_nEntityNumberId;
    bool g_nEntityStatic();
    bool g_nEntity_NodeMode(entity_t * node);

    const std::string * _gnEntityMsg;
    const char * gnEntityName(entity_t * current);

    static float entitymat[4][4];
    void scriptentity(entity_t * t, bool _noded, const std::string * _msg);
    void entityposition(entity_t * current, vec3_t position);
    virtual void CreateEntity(entity_t * current, entity_t entityvalues) = 0;
    void Entity_SetEpair(entity_t * current, const char * key, const char * value);
    /*
        Entity Classnames:

            info_player_start — Spawns the player at the start of the map.
            info_player_deathmatch — Multiplayer deathmatch player spawn point.
            info_player_team — Multiplayer team-based spawn point (team-specific).
            ammo_generic_small — Generic small ammo.
            ammo_generic_large — Generic large ammo.
            script_model — A model for NPC or static scripted objects.
            script_brushmodel — Used for scripting interactions with brush-based models.
            trigger_multiple — A trigger that can be activated multiple times.
            trigger_once — A trigger that activates only once.
            trigger_hurt — A trigger that causes damage to entities within its bounds.
            worldspawn — The root entity of the map, containing global map properties.
            light — A point light source.
            fx — Special effects like explosions or ambient particles.
            target_speaker — Plays a looping sound in the map.
            ambient_generic — Plays ambient sounds like wind or background noise.
            target_objective — Used to define objectives in single-player or multiplayer maps.
            flag — For capture-the-flag game modes.
            team_red — Defines red team objectives or spawn points.
            team_blue — Defines blue team objectives or spawn points.

    */
    void g_nEntitySignal_CallClassname(entity_t * current, const char * classname);

    entity_t * AllocateEntity();
    entity_t * Create_NewEntity();

    std::size_t * Entity_InvalidSize = 0;

    void Entity_ConstructToolbar(entity_t * entity, QToolBar * toolbar);
    void Entity_ConstructCommand(entity_t * entity, QAction * command);
    void Entity_ConstructMenu(entity_t * entity, QMenu * menu);

    int Spawnflags;
    int * g_nCallFlags;

    void Entity_BoundingBoxAABB(entity_t * entity, vec4_t aa_top_box, vec4_t bb_bottom_box, vec4_t right_box, vec4_t left_box, vec4_t back_box, vec4_t front_box, vec3_t _boxrgb_line_color[3]);

        vec3_t entity_transform;
        vec3_t entity_scale;
        vec3_t entity_rotate;

        virtual void Entity_Transform(entity_t * transform) = 0;
        virtual void Entity_Scale(entity_t * scale) = 0;
        virtual void Entity_Rotate(entity_t * rotate) = 0;

};

#endif // ENTITY_H
