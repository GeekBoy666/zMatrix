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


include_directories(${PROJECT_SOURCE_DIR}/modules/zgui/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zimgproc/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zmatch/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zcore/include)
find_package(OpenCV REQUIRED)

# 子目录
add_subdirectory(modules)

# 3rdpatry
add_subdirectory(3rdparty/libjpeg)

#add_executable(zMatrix main.cpp)
#target_link_libraries(zMatrix  ${OpenCV_LIBS} zgui zimgproc zmatch)
#target_link_libraries(zMatrix  ${OpenCV_LIBS} zgui zimgproc zmatch)