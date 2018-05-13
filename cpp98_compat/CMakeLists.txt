cmake_minimum_required(VERSION 2.8)

project(cpp98_compat CXX)

set(APP ${PROJECT_NAME})

#add_definitions(-std=c++11)
add_definitions(-DFLATBUFFERS_CPP98_STL -DCPP98_COMPAT)

include_directories(.)

add_executable(${APP} test_compat.cpp)


