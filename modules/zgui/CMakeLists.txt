include_directories(${PROJECT_SOURCE_DIR}/modules)

aux_source_directory(. DIR_ZGUI_SRCS)
add_library(zgui STATIC ${DIR_ZGUI_SRCS})
