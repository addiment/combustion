cmake_minimum_required(VERSION 3.10)

# set the project name
project(Combustion VERSION 0.1.0)

# add the executable
add_executable(Combustion src/combustion.cpp)

# define current SDL version
set(SDL_VERSION 2.20.22)

# I don't know how to use cmake :(

target_include_directories(Combustion PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/SDL-${SDL_VERSION}"
                           )