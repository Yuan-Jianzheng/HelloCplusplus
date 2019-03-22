project(hello_world) 

aux_source_directory(. DIR_ROOT_SRCS)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

add_executable(debug ${DIR_ROOT_SRCS})