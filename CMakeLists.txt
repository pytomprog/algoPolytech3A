cmake_minimum_required(VERSION 3.5)
project(algoPolytech3A)
set(CMAKE_CXX_STANDARD 20)

set(
    HEADERS
    include/
)

set(
    SOURCES
    src/main.cpp
    src/Configuration.cpp
    src/Environnement.cpp
)

include_directories(${HEADERS})

add_executable(algoPolytech3A ${SOURCES})