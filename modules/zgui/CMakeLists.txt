include_directories(${PROJECT_SOURCE_DIR}/modules/zgui/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zimgproc/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zmatch/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zcore/include)

aux_source_directory(./src/ DIR_ZGUI_SRCS)
find_package(OpenCV REQUIRED)

# 生成动态库
add_library(zgui SHARED ${DIR_ZGUI_SRCS})
# 生成静态库
add_library(zgui_static STATIC ${DIR_ZGUI_SRCS})
# 制定静态库的输出名称
set_target_properties(zgui_static PROPERTIES OUTPUT_NAME "zgui")
# 使静态和动态版本同时存在
set_target_properties(zgui PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(zgui_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)


install(TARGETS zgui zgui_static
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
install(DIRECTORY ./include/zmatrix/zgui DESTINATION include/zmatrix)