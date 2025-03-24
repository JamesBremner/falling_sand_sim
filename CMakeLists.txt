cmake_minimum_required(VERSION 3.28)
project(falling_sand_sim)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.0
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(falling_sand_sim src/main.cpp src/Engine.cpp src/Cell.cpp)
target_compile_features(falling_sand_sim PRIVATE cxx_std_17)
target_link_libraries(falling_sand_sim PRIVATE SFML::Graphics)

target_include_directories(falling_sand_sim PRIVATE include)
target_include_directories(falling_sand_sim PRIVATE ${CMAKE_SOURCE_DIR}/include)

target_compile_options(falling_sand_sim PRIVATE -Wall -Wextra -Werror)