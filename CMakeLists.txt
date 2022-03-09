#cmake最低版本需求，不加入此行会收到警告信息
cmake_minimum_required(VERSION 3.19)
#项目名称
project(cpp)

set(CMAKE_CXX_STANDARD 14)

file(GLOB SRC_LIST "model/*.h" "model/*.cpp") #GLOB不支持递归遍历子目录，若想实现递归遍历子目录，请使用GLOB_RECURSE

#构建可执行文件
add_executable(
        ${CMAKE_PROJECT_NAME}#可执行文件的名字，一般用这个CMAKE_PROJECT_NAME这个宏替换成项目名称
        ${SRC_LIST}
        #main.cpp
        #指针.cpp
        #全局区.cpp
        #栈区.cpp
        #堆区.cpp
        #map.cpp
        #引用.cpp
        #多态.cpp
        #模板.cpp
        #容器.cpp
        字符.cpp
)