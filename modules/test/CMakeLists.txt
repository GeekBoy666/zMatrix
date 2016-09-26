include_directories(${PROJECT_SOURCE_DIR})

aux_source_directory(. DIR_TEST_SRCS)
add_library(ztest STATIC ${DIR_TEST_SRCS})
