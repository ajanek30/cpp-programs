cmake_minimum_required(VERSION 4.1)
project(cpp_programs)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp_programs
        .idea/.gitignore
        .idea/cpp-programs.iml
        .idea/modules.xml
        .idea/vcs.xml
        .idea/workspace.xml
        README.md
        VectorOperations/Main.cpp
        VectorOperations/Main.h)
