#ifndef FIGURE_H
#define FIGURE_H
#include "Shape.h"
#include "Line.h"

class Figure
{
    private:
        Shape** figure;
        int nrCounter;

    public:
        Figure();
        Figure(Shape** shape, int nrCounter);
        void addShape(Shape *s);
        Line getBoundingBox(); //Polygon operator+(const Polygon& otherPoly);
        ~Figure();
};

#endif