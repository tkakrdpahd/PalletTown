# 001-004
## Backgrounds
When people hear "GPU," they often think of graphics and GUIs. [QT](https://www.qt.io) is the most well-known GUI library for C/C++. However, due to licensing constraints, many developers prefer [Dear ImGui](https://github.com/ocornut/imgui) as an alternative. Qt's licensing model is similar to Red Hat Enterprise Linux (RHEL)—while the source code is open, commercial use typically requires a paid license. In contrast, Dear ImGui uses the permissive MIT license, making it freely usable in any project without restrictions.

However, GPU computation extends far beyond graphics... 

이 과정에서 RAM, Virtual Memory, 그리고 VRAM 간의 데이터 할당과 동기화 ...  

이 모듈에서는 3차원 행렬을 병렬연산하고, 이를 단순한 dot으로 랜더링하여 표시해 보는 것을 목표로 한다.

## vulkan
Git Submodule ...
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
