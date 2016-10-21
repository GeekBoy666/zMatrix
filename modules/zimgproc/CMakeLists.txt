include_directories(${PROJECT_SOURCE_DIR}/modules/zgui/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zimgproc/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zmatch/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zcore/include)

aux_source_directory(./src DIR_ZIMGPROC_SRCS)


add_library(zimgproc SHARED ${DIR_ZIMGPROC_SRCS})
add_library(zimgproc_static STATIC ${DIR_ZIMGPROC_SRCS})
# 制定静态库的输出名称
set_target_properties(zimgproc_static PROPERTIES OUTPUT_NAME "zimgproc")
# 使静态和动态版本同时存在
set_target_properties(zimgproc PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(zimgproc_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)

install(TARGETS zimgproc zimgproc_static
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
install(DIRECTORY ./include/zmatrix/zimgproc DESTINATION include/zmatrix)