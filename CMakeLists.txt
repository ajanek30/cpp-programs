cmake_minimum_required(VERSION 4.1)
project(cpp_programs)

set(CMAKE_CXX_STANDARD 20)

# Target 1
add_executable(SubstitutionCipher SubstitutionCipher/Main.cpp)

# Target 2
add_executable(VectorOperations VectorOperations/Main.cpp)

add_executable(MemoryManipulating MemoryManipulating/Main.cpp)

add_executable(UserScoreManagement UserScoreManagement/Main.cpp)

add_executable(MergingRemovingDupliactesArray MergingRemovingDupliactesArray/Main.cpp)

# Nasz docelowy program!
add_executable(MoviesTracker MoviesTracker/Main.cpp MoviesTracker/Movie.cpp MoviesTracker/Movies.cpp)