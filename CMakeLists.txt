cmake_minimum_required(VERSION 3.16)
PROJECT(cad3d LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Options for dev
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

#Find Qt & OpenGL
find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(OpenGL REQUIRED)

add_executable(
    cad3d
    src/main.cpp
)

target_include_directories(cad3d PRIVATE include)

target_link_libraries(
    cad3d
    Qt5::Widgets
    OpenGL::GL
)

