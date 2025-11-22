#include "BRepBuilder.h"
#include <BRepPrimAPI_MakeBox.hxx>
#include <BRepPrimAPI_MakeSphere.hxx>

Shape BRepBuilder::makeBox(double x, double y, double z) {
    return Shape(BRepPrimAPI_MakeBox(x, y, z).Shape());
}

Shape BRepBuilder::makeSphere(double radius) {
    return Shape(BRepPrimAPI_MakeSphere(radius).Shape());
}
