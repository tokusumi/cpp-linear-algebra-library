cmake_minimum_required(VERSION 3.0.0)
project(intro-eigen VERSION 0.1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "-O2 -Wall")
find_package(Eigen3 3.3 REQUIRED NO_MODULE)

set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ../Release)

include(CTest)
enable_testing()

include_directories(EIGEN3_INCLUDE_DIR)
add_executable(exec main.cpp)

target_link_libraries (exec Eigen3::Eigen)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
