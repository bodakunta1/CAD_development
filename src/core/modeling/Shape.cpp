#include "Shape.h"

Shape::Shape() {}

Shape::Shape(const TopoDS_Shape& s) : shape(s) {}

bool Shape::isNull() const {
    return shape.IsNull();
}
