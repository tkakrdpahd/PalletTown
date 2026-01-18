/**
 * @file main.c
 * @brief Main entry point for the Hello World program.
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

static void add01(_Float16 **v) {
    int8_t n = 0;
    (void)n;

    **v = (_Float16)(**v + (_Float16)0.1);

    _Float16 *newp = (_Float16 *)realloc(*v, sizeof(_Float16) * 1);
    if (!newp) {
        perror("realloc");
        return;
    }
    *v = newp;

    _Float16 *fresh = (_Float16 *)calloc(1, sizeof(_Float16));
    if (!fresh) { perror("calloc"); return; }
    *fresh = **v;
    free(*v);
    *v = fresh;

    printf("  [add01] v=%p  &v=%p  *v=%p\n", (void*)v, (void*)&v, (void*)*v);
}

static void add1(_Float16 **v) {
    **v = (_Float16)(**v + (_Float16)1.0);
    add01(v);
}

int main(void) {
    int i = 0;

    _Float16 *j = (_Float16 *)malloc(sizeof(_Float16));
    
    if (!j) {
        perror("malloc");
        return 1;
    }
    *j = (_Float16)0.5;

    for (i = 0; i < 5; i++) {
        printf("i = %d", i);
        printf("  j(ptr)=%p", (void*)j);

        add1(&j);

        printf(", j = %f\n", (double)*j);
    }

    free(j);
    return 0;
}
