cmake_minimum_required(VERSION 3.15)
project(sdl_audio_test)

set(CMAKE_C_STANDARD 11)

# Find SDL2 package
find_package(SDL2 REQUIRED)

# Define the assets directory relative to the project root
set(ASSETS_DIR "${CMAKE_SOURCE_DIR}/assets")

# Configure a header file to pass CMake settings to the source code
configure_file(
        "${CMAKE_SOURCE_DIR}/config.h.in"
        "${CMAKE_BINARY_DIR}/config.h"
)

# Include SDL2 headers and the build directory for our configured header
include_directories(
        ${SDL2_INCLUDE_DIRS}
        ${CMAKE_BINARY_DIR}
)

# Create executable
add_executable(sdl_audio_test main.c audioplayer.c)


# Link SDL2 libraries
target_link_libraries(sdl_audio_test ${SDL2_LIBRARIES})