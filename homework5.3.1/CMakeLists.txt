cmake_minimum_required(VERSION 3.20)

#project(homework5.3.1) 


#add_executable(homework5.3.1 homework531.cpp)

add_subdirectory(D:\homeworks\homework5.3\homework5.3.1\catch2 catch2-build)
add_executable(homework5.3.1 test.cpp)
target_link_libraries(homework5.3.1 PRIVATE Catch2::Catch2)

