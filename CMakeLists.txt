cmake_minimum_required(VERSION 3.16)
project(drone_sim LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Release)

# Add Eigen submodule
add_subdirectory(external/eigen)

# Include project headers
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Collect source files
file(GLOB SOURCES src/*.cpp)

# Create executable
add_executable(drone_sim ${SOURCES})

# Eigen is header-only; just add include directory
target_include_directories(drone_sim PRIVATE external/eigen)

