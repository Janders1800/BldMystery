
#ifndef POLYGON_H

#define POLYGON_H

#include "array.h"

class B_IDataFile;

class B_WorldPoint
{
public:
    double x;
    double y;
    double z;
    int unknown18;
    int unknown1C;
};

extern "C"
{

B_IDataFile * read_points(B_IDataFile *file, array_t<B_WorldPoint> *points);

}

class B_Polygon
{
public:
    virtual ~B_Polygon();

    unsigned int numVertices;
    int *vertices;
};

#endif /* POLYGON_H */
