include_directories(${PROJECT_SOURCE_DIR}/modules)


aux_source_directory(. DIR_ZMATCH_SRCS)
add_library(zmatch STATIC ${DIR_ZMATCH_SRCS})
