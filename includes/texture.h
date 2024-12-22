#ifndef TEXTURE_H
#define TEXTURE_H

#include <string>
#include "libs/mathlib.h"
class texture_t{
public:

    texture_t();
    virtual ~texture_t();

    bool textureInit(texture_t * t);

    static float _TEX_W;
    static float _TEX_H;

    const char * tTextureName;
    std::size_t TextureSize;

    void AddTexture(texture_t * t, bool _init, const char * tFilename, std::size_t * TSize);

        float texdef_alpha;

        texture_t * texdefcurrent;

        float texdefcoords[4][4];

        static vec3_t * texture_angle;

        enum{ PNG = 0, JPG, TGA, SHADER }TextureType;

};


#endif // TEXTURE_H
