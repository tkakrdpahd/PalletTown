# CMakeLists.txt
cmake_minimum_required(VERSION 3.12) # Use CMake version 3.12 or higher

project(PalletTown LANGUAGES C) # Define project name and specify C language

set(CMAKE_C_STANDARD 99) # Set C standard to C99
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(PalletTown
    main.c
)

find_package(Vulkan REQUIRED)
find_package(SDL2 REQUIRED)

target_link_libraries(PalletTown PRIVATE Vulkan::Vulkan SDL2::SDL2) # Link Vulkan and SDL libraries to the executable