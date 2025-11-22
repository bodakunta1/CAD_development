#include <iostream>
#include "core/modeling/BRepBuilder.h"

int main() {
    Shape box = BRepBuilder::makeBox(100, 200, 300);

    if (!box.isNull()) {
        std::cout << "Box successfully created!" << std::endl;
    } else {
        std::cout << "Error creating shape." << std::endl;
    }

    return 0;
}
