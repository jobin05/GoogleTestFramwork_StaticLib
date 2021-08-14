
project($STATICLIB)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)  # Includes the contents of the conanbuildinfo.cmake file.
conan_basic_setup()  # Prepares the CMakeList.txt for Conan.

add_library(add STATIC add.cpp)
add_executable(addapp  add_app.cpp)
target_link_libraries(addapp add)
add_executable(testor  test.cpp)
target_link_libraries(testor add gtest pthread)
