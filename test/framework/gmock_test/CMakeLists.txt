set(SOURCE_LIST "${CMAKE_CURRENT_SOURCE_DIR}/gtest/src/gtest-all.cc")
list(APPEND SOURCE_LIST "${CMAKE_CURRENT_SOURCE_DIR}/gmock/src/gmock-all.cc")

include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/gtest/include
    ${CMAKE_CURRENT_SOURCE_DIR}/gtest
    ${CMAKE_CURRENT_SOURCE_DIR}/gmock/include
    ${CMAKE_CURRENT_SOURCE_DIR}/gmock
)

SET(LIBRARY_OUTPUT_PATH ${CMAKE_TARGET_ROOT})

add_library(gmock-test SHARED ${SOURCE_LIST})
