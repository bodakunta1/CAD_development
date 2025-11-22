#include "AISViewer.h"
#include <Graphic3d_GraphicDriver.hxx>
#include <OpenGl_GraphicDriver.hxx>
#include <V3d_Viewer.hxx>

AISViewer::AISViewer() {
    Handle(Graphic3d_GraphicDriver) driver = new OpenGl_GraphicDriver();
    Handle(V3d_Viewer) viewer = new V3d_Viewer(driver);
    context = new AIS_InteractiveContext(viewer);

    view = viewer->CreateView();
    view->SetBackgroundColor(Quantity_NOC_BLACK);
}

void AISViewer::displayShape(const Shape& s) {
    Handle(AIS_Shape) ais = new AIS_Shape(s.shape);
    context->Display(ais, Standard_True);
}

void AISViewer::fitAll() {
    view->FitAll();
}
