# 版本要求
cmake_minimum_required(VERSION 3.5)

set(PRO_NAME zMatrix)
project(${PRO_NAME})

# 编译要求，使用C++11
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_subdirectory(test)
add_subdirectory(zcore)
add_subdirectory(zimgproc)
add_subdirectory(zgui)
add_subdirectory(zmatch)

# 指定二进制文件和共享库的位置
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)


include_directories(${PROJECT_SOURCE_DIR})
message(${PROJECT_SOURCE_DIR})

aux_source_directory(. DIR_SRCS)
add_executable(${PRO_NAME} ${DIR_SRCS})

# OpenCV
find_package(OpenCV REQUIRED)

target_link_libraries(${PRO_NAME}  ${OpenCV_LIBS} zgui ztest zimgproc zmatch)