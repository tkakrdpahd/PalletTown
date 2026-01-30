# 001-004
## Backgrounds
GUI ...
[QT](https://www.qt.io) ...
[Dear ImGui](https://github.com/ocornut/imgui) ...

## vulkan
OpenGL ...
Vulkan + sdl2

## vcpkg
[set up vcpkg](https://learn.microsoft.com/en-us/vcpkg/get_started/get-started-vs?pivots=shell-bash)

``` sh
git clone https://github.com/microsoft/vcpkg.git

vcpkg/bootstrap-vcpkg.sh

vcpkg/vcpkg install
```

## Build & Run
```sh
cd /Users/mdoo/Documents/GitHub/PalletTown/001-004
cmake --preset default
cmake --build build
./build/PalletTown
```