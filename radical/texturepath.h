#ifndef TEXTUREPATH_H
#define TEXTUREPATH_H

#include <qstring.h>

class texpath_t{
public:
    texpath_t();
    virtual ~texpath_t();

    int pathid;
    char c[0];

    const char * tpath = "\n";

    void AddTexturesToWindow(QWindow * window, const char * path);

};

#endif // TEXTUREPATH_H
