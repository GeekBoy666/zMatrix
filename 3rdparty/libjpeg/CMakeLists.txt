file(GLOB lib_srcs *.c)
file(GLOB lib_hdrs *.h)

add_library(jpeg STATIC ${lib_srcs} ${lib_hdrs})

if(UNIX)
  if(CMAKE_COMPILER_IS_GNUCXX OR CV_ICC)
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fPIC")
  endif()
endif()

if(CMAKE_COMPILER_IS_GNUCXX)
  set_source_files_properties(jcdctmgr.c PROPERTIES COMPILE_FLAGS "-O1")
endif()

set_target_properties(jpeg
  PROPERTIES OUTPUT_NAME "jpeg"
  )
