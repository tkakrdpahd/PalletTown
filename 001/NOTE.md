# 001

"Hello, World" is often considered the very first step in learning a new programming language.

## Code
```c
#include <stdio.h>

int main(void) {
    printf("hello, world\n");
    
    return 0;
}
```

Even at this stage, the code already feels dull and oddly pedantic. In this text, I will not speak like a clichéd expert, lecturing about the meaning of the `main` function’s name or the purpose of `return`.

When I find myself unable to tolerate this kind of boredom, my attention shifts—not to the output, but to the `void`.

I have generally written empty parentheses () without void.

However, in *C Programming: A Modern Approach* by King (2008), the author explicitly specifies `void` as the parameter.

This program works perfectly fine even without writing void inside the parentheses.
Under ANSI C (C89/C90), however, `int main()` and `int main(void)` do not mean the same thing.

The former indicates that the parameter list is unknown, while the latter explicitly states that the function takes no parameters.

The difference is subtle, but intentional: it reflects a distinction between unknown and none—a distinction that early C eventually had to make explicit.

## Build & Run

In *C Programming: A Modern Approach* by King (2008), the author introduces the compiler and linker early on using `gcc`.  

Paradoxically, I prefer to begin with a development environment that feels intuitive, comfortable, and broadly applicable.

For that reason, this project uses **CMake**, a product of later generations of computer engineering, rather than relying directly on raw compiler invocations.

### Build & Run with gcc
```sh
gcc -o main main.c
```

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
