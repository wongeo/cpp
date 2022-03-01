cmake_minimum_required(VERSION 3.19)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SRC_LIST "model/*.h" "model/*.cpp") #GLOB不支持递归遍历子目录，若想实现递归遍历子目录，请使用GLOB_RECURSE

add_executable(
        cpp
        ${SRC_LIST}
        #main.cpp
        #指针.cpp
        #全局区.cpp
        #栈区.cpp
        #堆区.cpp
        #map.cpp
        #引用.cpp
        多态.cpp
)