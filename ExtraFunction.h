#include <iostream>
#include "Shape.h"
#include "Polygon.h"
#include "Triangle.h"
#include "Line.h"
#include "Point.h"

Shape* getShape(int nrCounter, double *xCoord, double *yCoord);

Shape* collectShapes(std::string sentence);
