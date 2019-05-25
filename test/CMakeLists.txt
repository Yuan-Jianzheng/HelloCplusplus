project(test)

add_compile_options(-std=c++11)

add_subdirectory(framework/gtest)

include_directories(
    framework/gtest/include
    include
    ../include
)

aux_source_directory(. ALL_SRC_FILES)
aux_source_directory(src ALL_SRC_FILES)
aux_source_directory(../src ALL_SRC_FILES)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

add_executable(debug ${ALL_SRC_FILES})

target_link_libraries(debug gtest pthread)
