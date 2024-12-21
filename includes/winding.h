#ifndef WINDING_H
#define WINDING_H

class winding_t{
public:
    winding_t();
    virtual ~winding_t();

    int windnumpoints;

    winding_t * previouswinding; winding_t * currentwinding; winding_t * nextwinding;
};

#endif // WINDING_H
