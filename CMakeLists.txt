cmake_minimum_required(VERSION 3.28)
project(graf)

set(CMAKE_CXX_STANDARD 17)

add_executable(graf src/main.cpp
        src/Graph.cpp
        src/Graph.h
        src/Vertex.cpp
        src/Vertex.h
        src/Edge.cpp
        src/Edge.h)
