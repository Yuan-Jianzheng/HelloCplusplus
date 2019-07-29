project(test)

add_compile_options(-std=gnu++11)

set(CMAKE_TARGET_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/build)
set(CMAKE_TEST_CODE_ROOT ${CMAKE_CURRENT_SOURCE_DIR})
set(CMAKE_PRODUCTION_CODE_ROOT ${CMAKE_CURRENT_SOURCE_DIR}/..)

add_subdirectory(${CMAKE_TEST_CODE_ROOT}/framework)

include_directories(
    ${CMAKE_TEST_CODE_ROOT}/include
    ${CMAKE_TEST_CODE_ROOT}/framework/gmock_test/gtest/include
    ${CMAKE_PRODUCTION_CODE_ROOT}/include
    ${CMAKE_TEST_CODE_ROOT}/framework/gmock_test/gmock/include
)

set(ALL_SRC_FILES ${CMAKE_TEST_CODE_ROOT}/main.cpp)
aux_source_directory(${CMAKE_TEST_CODE_ROOT}/src ALL_SRC_FILES)
aux_source_directory(${CMAKE_PRODUCTION_CODE_ROOT}/src ALL_SRC_FILES)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

SET(EXECUTABLE_OUTPUT_PATH ${CMAKE_TARGET_ROOT})

add_executable(debug ${ALL_SRC_FILES})

target_link_libraries(debug gmock-test pthread)
