cmake_minimum_required(VERSION 3.10)
project(HW-GHA VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Основное приложение
add_executable(hw-gha src/main.cpp)

# Простая конфигурация для CI/CD
message(STATUS "Project configured successfully")
message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")