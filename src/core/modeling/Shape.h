#pragma once
#include <TopoDS_Shape.hxx>

class Shape {
public:
    TopoDS_Shape shape;

    Shape();
    Shape(const TopoDS_Shape& s);

    bool isNull() const;
};
