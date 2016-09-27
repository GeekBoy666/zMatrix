include_directories(${PROJECT_SOURCE_DIR}/modules)

aux_source_directory(. DIR_ZIMGPROC_SRCS)
add_library(zimgproc STATIC ${DIR_ZIMGPROC_SRCS})
