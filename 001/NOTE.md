# 001

"Hello, World" is often considered the very first step in learning a new programming language.

## Build & Run

In *C Programming: A Modern Approach* by King (2008), the author introduces the compiler and linker early on using `gcc`.  

Paradoxically, I prefer to begin with a development environment that feels intuitive, comfortable, and broadly applicable.

For that reason, this project uses **CMake**, a product of later generations of computer engineering, rather than relying directly on raw compiler invocations.

### Build & Run with CMake
```sh
mkdir build && cd build
cmake ..
cmake --build .
./PalletTown
```

### Build & Run with Ninja
```sh
mkdir build-ninja && cd build-ninja
cmake -G Ninja ..
ninja
./PalletTown
```
