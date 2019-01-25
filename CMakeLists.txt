cmake_minimum_required(VERSION 3.12)
project(project1)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(.idea)
include_directories(cmake-build-debug)

add_executable(project1
        .idea/codeStyles/Project.xml
        .idea/misc.xml
        .idea/modules.xml
        .idea/project1.iml
        .idea/workspace.xml
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/project1.cbp
        cmake-build-debug/project1.exe
        cmake-build-debug/questions.txt
        analysis.txt
        CMakeLists.txt
        personality_test.cpp
        personality_test.h
        proj1.cpp
        pt
        questions.txt)
