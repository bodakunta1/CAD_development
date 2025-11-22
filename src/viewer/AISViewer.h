#pragma once
#include <AIS_InteractiveContext.hxx>
#include <V3d_View.hxx>
#include "Shape.h"

class AISViewer {
private:
    Handle(V3d_View) view;
    Handle(AIS_InteractiveContext) context;

public:
    AISViewer();
    void displayShape(const Shape& s);
    void fitAll();
};
