cmake_minimum_required(VERSION 4.1)
project(cpp_programs)

set(CMAKE_CXX_STANDARD 20)

# Target 1
add_executable(SubstitutionCipher cpp-programs/SubstitutionCipher/Main.cpp
        pyramid.cpp
        SubstitutionCipher/Main.cpp)

# Target 2
add_executable(VectorOperations cpp-programs/VectorOperations/Main.cpp
        pyramid.cpp)