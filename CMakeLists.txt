cmake_minimum_required(VERSION 3.10)
project(MyProject VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main executable
add_executable(myapp src/main.cpp)

# Tests
enable_testing()
add_executable(run_tests tests/test_main.cpp)
target_link_libraries(run_tests gtest_main)

add_test(NAME MyTests COMMAND run_tests)