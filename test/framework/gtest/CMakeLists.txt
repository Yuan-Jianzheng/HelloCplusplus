add_compile_options(-std=c++11)

set(SOURCE_LIST "${CMAKE_CURRENT_SOURCE_DIR}/src/gtest-all.cc")

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}
)

SET(LIBRARY_OUTPUT_PATH ${CMAKE_TARGET_ROOT})

add_library(gtest SHARED ${SOURCE_LIST})
