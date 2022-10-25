cmake_minimum_required(VERSION 3.16.0)

project(LearnDesignPatterns)

set(CMake_BUILD_TYPE "Debug")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/build/bin)

include_directories(${PROJECT_SOURCE_DIR}/src)

# add_subdirectory(${PROJECT_SOURCE_DIR}/3rdparty/SFML)
# add_subdirectory(${PROJECT_SOURCE_DIR}/3rdparty/spdlog)

add_subdirectory(${PROJECT_SOURCE_DIR}/src/DesignPatterns)

add_executable(
    LearnDesignPatterns
    ${PROJECT_SOURCE_DIR}/src/Main.cpp
)

target_link_libraries(
    LearnDesignPatterns
    DesignPatterns
)
