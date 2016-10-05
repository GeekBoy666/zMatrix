project(test)
include_directories(${PROJECT_SOURCE_DIR}/modules)

set(LIST ../zcore/debug.h test.h test.cpp)
add_executable(t_bitRev ${LIST})

target_link_libraries(t_bitRev  zgui zimgproc zcore)