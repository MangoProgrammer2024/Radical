#ifndef TEXTURE_HPP
#define TEXTURE_HPP

#include "includes/Stdafx.hpp"

class Texture {
public:

    Texture();
    virtual ~Texture();
    /*!---Texure Width Holder---!*/
    virtual void TexWidth() = 0;
    /*!---Texure Height Holder---!*/
    virtual void TexHeight() = 0;
    /*!---Texure Invalid Size---!*/
    const static std::size_t INVALID_SIZE = 0;
    /*!---If Size Is Invalid---!*/
    bool sizeInvalid(Texture * texure);
    /*!---Texure Name---!*/
    const std::string& textureName()const;
    /*!---Texure Actual Height---!*/
    const std::size_t TexHeight;
    /*!---Texure Actual Width---!*/
    const std::size_t TexWidth;
    /*!---Texure Pointer---!*/
    Texture& TexturePtr;

};
#endif
