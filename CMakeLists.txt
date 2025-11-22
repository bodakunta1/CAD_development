cmake_minimum_required(VERSION 3.16)
project(CAD3D)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCASCADE REQUIRED)

include_directories(${OpenCASCADE_INCLUDE_DIR})

add_executable(cad3d
    src/main.cpp
)

target_link_libraries(cad3d
    PRIVATE
    TKernel
    TKMath
    TKG2d
    TKG3d
    TKIGES
    TKSTEP
    TKBRep
    TKGeomBase
    TKGeomAlgo
    TKTopAlgo
    TKPrim
    TKShHealing
    TKBool
    TKBO
    TKOffset
    TKFillet
    TKMesh
)
