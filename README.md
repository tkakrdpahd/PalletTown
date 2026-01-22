# Pallet Town

Pallet Town (マサラタウン) is the starting town in Pokémon. In South Korea, there is an internet meme that says, “Wow, it’s Pallet Town!”, which is often used to describe a feeling of returning to the very beginning.

The Pallet Town project is an attempt to return—using my current perspective—to the moment when I first encountered programming in elementary school, and to re-examine that starting point from where I am now.

This project repository was created almost two years ago. In other words, I was already struggling with similar questions back then, but for various reasons, I was unable to follow through and fully pursue them at the time.

To be honest, simply reading *The C Programming Language* by Kernighan and Ritchie and mechanically implementing its example code feels overly academic and, for me, ultimately unengaging.

Lately, I feel that I have lost my way.

## Chapter

### C

#### 001 Hello
Introduction to C programming, exploring the meaning of `void` and the philosophy of explicit language design.

[001 NOTE](./001/NOTE.md)

##### 001-001 Basics
Modular Hello World with header files and system calls.

[001-001 NOTE](./001-001/NOTE.md)

##### 001-002 Pointer
Exploring pointers and memory through ARM64 assembly, with reflections on the beauty of low-level programming.

[001-002 NOTE](./001-002/NOTE.md)

##### 001-003 Advanced Memory
Dynamic memory management with malloc, realloc, calloc, and double pointers.

[001-003 NOTE](./001-003/NOTE.md)

#### 002 Low-Level
Raw terminal I/O control using termios and POSIX system calls.

[002 NOTE](./002/NOTE.md)

#### 003 Sandtris with CLI (C Version)
A practical one-dimensional Sandtris game combining all core C features through function-driven development.

[003 Description](./003/003.md)

### C++
To be continued: vcpkg, Drogon framework, and beyond.

## Build & Run

Each module can be built independently using CMake:

```sh
# Standard CMake build
cd <module-directory>
mkdir build && cd build
cmake ..
cmake --build .
./PalletTown

# Or using Ninja
mkdir build-ninja && cd build-ninja
cmake -G Ninja ..
ninja
./PalletTown
```

## References
[1] King, K. N. (2008). *C Programming: A Modern Approach* (2nd ed.; C89 & C99). W. W. Norton & Company. ISBN 978-0393979503.

[2] Jo, Y. (2019). *Objects* (7th ed.). Wiki Books. ISBN 979-1158391409.

[3] Katsura, Y., Yotsukura, T., & Salvaty, M. (2014). *The Ultimate Textbook for Technical Artists* (J. Seo, Trans.). Hanbit Media. ISBN 978-8968481017.