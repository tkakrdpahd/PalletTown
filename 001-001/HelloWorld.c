/**
 * @file HelloWorld.c
 * @brief Implementation of the Hello World module.
 */

#include <unistd.h>
#include "HelloWorld.h"

void hello_world(void) {
    const char msg[] = "hello, world\n";
    write(1, msg, sizeof(msg) - 1);
}
