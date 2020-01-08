#ifndef LOCATION_H

#define LOCATION_H

#include "Vector.h"
#include "Matrix.h"

class location_t
{
public:
    void setPosition(const B_Vector &pos);
    void setOrientation(const B_Vector &orientation);
private:
    B_Vector position;
    double rotationX;
    double rotationY;
    double rotationZ;
    B_Matrix matrix0030;
    B_Matrix matrix00B0;
};

#endif