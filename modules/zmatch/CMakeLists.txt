include_directories(${PROJECT_SOURCE_DIR}/modules/zgui/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zimgproc/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zmatch/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zcore/include)

aux_source_directory(./src DIR_ZMATCH_SRCS)

add_library(zmatch SHARED ${DIR_ZMATCH_SRCS})
add_library(zmatch_static STATIC ${DIR_ZMATCH_SRCS})
# 制定静态库的输出名称
set_target_properties(zmatch_static PROPERTIES OUTPUT_NAME "zmatch")
# 使静态和动态版本同时存在
set_target_properties(zmatch PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(zmatch_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)


install(TARGETS zmatch zmatch_static
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
install(DIRECTORY ./include/zmatrix/zmatch DESTINATION include/zmatrix)