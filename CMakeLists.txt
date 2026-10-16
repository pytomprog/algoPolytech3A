cmake_minimum_required(VERSION 3.5)
project(algoPolytech3A)
set(CMAKE_CXX_STANDARD 17)

set(
    HEADERS
    include/
)

set(
    SOURCES
    src/main.cpp
    src/Grille.cpp
)

include_directories(${HEADERS})

add_executable(algoPolytech3A ${SOURCES})