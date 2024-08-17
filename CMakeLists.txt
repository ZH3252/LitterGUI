# 设置CMake的最低版本要求
cmake_minimum_required(VERSION 3.10)

# 设置项目的名称
project(littergui)

# 指定C标准
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# 包含头文件目录
include_directories(include)

# 搜索src文件夹下的所有源文件，并将它们保存到变量SRC_FILES中
file(GLOB SRC_FILES "src/*.c")

# 添加可执行文件
add_executable(littergui ${SRC_FILES})
