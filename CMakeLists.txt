@"
cmake_minimum_required(VERSION 3.10)
project(HW-GHA VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hw-gha src/main.cpp)

if(WIN32)
    set_target_properties(hw-gha PROPERTIES SUFFIX ".exe")
endif()
"@ | Out-File -FilePath CMakeLists.txt -Encoding UTF8