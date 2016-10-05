# --------------------------------------------------------------
#  Root CMake file for zMatrix
#
#     From the off-tree build directory, invoke:
#       $ cmake <PATH_TO_ZMATRIX_ROOT>
# --------------------------------------------------------------
cmake_minimum_required(VERSION 3.5)

project(zMatrix)

# 编译要求，使用C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 子目录
add_subdirectory(modules)

# 头文件
include_directories(${PROJECT_SOURCE_DIR})
include_directories(${PROJECT_SOURCE_DIR}/modules)

aux_source_directory(. DIR_SRCS)
add_executable(zMatrix ${DIR_SRCS})

# OpenCV
if (UNIX)
    message("This is Unix.")
    find_package(OpenCV REQUIRED)
    target_link_libraries(zMatrix  ${OpenCV_LIBS} zgui zimgproc zmatch)
elseif (WIN32)
    message("This is Windows.")
endif()