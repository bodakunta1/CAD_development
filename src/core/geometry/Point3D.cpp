#include "Point3D.h"

Point3D::Point3D() : x(0), y(0), z(0) {}
Point3D::Point3D(double x, double y, double z) : x(x), y(y), z(z) {}

Vector3 Point3D::operator-(const Point3D& rhs) const {
    return Vector3(x - rhs.x, y - rhs.y, z - rhs.z);
}

Point3D Point3D::operator+(const Vector3& v) const {
    return Point3D(x + v.x, y + v.y, z + v.z);
}
