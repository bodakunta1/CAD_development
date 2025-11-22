#pragma once
#include "Vector3.h"

class Point3D {
public:
    double x, y, z;

    Point3D();
    Point3D(double x, double y, double z);

    Vector3 operator-(const Point3D& rhs) const;
    Point3D operator+(const Vector3& v) const;
};
