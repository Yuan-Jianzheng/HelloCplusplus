add_compile_options(-std=c++11)

set(SOURCE_LIST "${CMAKE_CURRENT_SOURCE_DIR}/src/gtest-all.cc")

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(gtest STATIC ${SOURCE_LIST})