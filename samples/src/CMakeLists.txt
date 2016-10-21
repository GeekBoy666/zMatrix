# 显示一张图片
find_package(OpenCV REQUIRED)
ADD_EXECUTABLE(showImage showImage.cpp)
target_link_libraries(showImage  ${OpenCV_LIBS} zgui zimgproc zmatch)


# 离散傅里叶
find_package(OpenCV REQUIRED)
ADD_EXECUTABLE(dft dft.cpp)
target_link_libraries(dft  ${OpenCV_LIBS} zgui zimgproc zmatch)
