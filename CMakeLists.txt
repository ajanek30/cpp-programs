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


add_executable(MoviesTracker MoviesTracker/Main.cpp MoviesTracker/Movie.cpp MoviesTracker/Movies.cpp)

add_executable(Overloading Overloading/Main.cpp Overloading/Mystring.cpp)

add_executable(OverloadingNonMember OverloadingNonMember/Main.cpp OverloadingNonMember/Mystring.cpp)

add_executable(BankingManagementInheritance BankingManagementInheritance/main.cpp BankingManagementInheritance/Account.cpp BankingManagementInheritance/Account_Util.cpp BankingManagementInheritance/Savings_Account.cpp)
