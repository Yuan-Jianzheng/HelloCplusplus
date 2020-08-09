SET(PACKAGE_NAME \"mockcpp\")
SET(PACKAGE_STRING \"mockcpp\")
SET(PACKAGE_BUGREPORT '"dev.mockcpp@gmail.com"')
SET(PACKAGE_URL \"http://code.google.com/p/mockcpp\")
SET(PACKAGE '"mockcpp"')
SET(VERSION \"2.6\")

SET(MOCKCPP_XUNIT "gtest")
SET(MOCKCPP_XUNIT_HOME "${CMAKE_CURRENT_SOURCE_DIR}/../gmock_test/gtest")
SET(MOCKCPP_SRC_ROOT "${CMAKE_CURRENT_SOURCE_DIR}")

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/src)
