cmake_minimum_required(VERSION 3.10)
project(TestExample)

# Locate GTest package
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add test executable
add_executable(test_example test_example.cpp)

# Link test executable against GTest and pthread library
target_link_libraries(test_example ${GTEST_LIBRARIES} pthread)