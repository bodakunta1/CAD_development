#pragma once
#include "Shape.h"

class BRepBuilder {
public:
    static Shape makeBox(double x, double y, double z);
    static Shape makeSphere(double radius);
};
