include_directories(${PROJECT_SOURCE_DIR}/modules/zgui/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zimgproc/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zmatch/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/zcore/include)
include_directories(${PROJECT_SOURCE_DIR}/modules/ztest/include)

aux_source_directory(./src/ DIR_ZTEST_SRCS)

# 生成动态库
add_library(ztest SHARED ${DIR_ZTEST_SRCS})
# 生成静态库
add_library(ztest_static STATIC ${DIR_ZTEST_SRCS})
# 制定静态库的输出名称
set_target_properties(ztest_static PROPERTIES OUTPUT_NAME "ztest")
# 使静态和动态版本同时存在
set_target_properties(ztest PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(ztest_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)


install(TARGETS ztest ztest_static
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib)
install(DIRECTORY ./include/zmatrix/ztest DESTINATION include/zmatrix)