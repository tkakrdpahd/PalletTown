#include <stdio.h>

int main(void) {
    int i[] = {1, 2, 3};
    int j = 0;

    int *p = i;
    int *q = &j;

    q = p + 1;
    j = *q + 1;

    printf("i[0]=%d, i[1]=%d, j=%d\n", i[0], i[1], j);
    printf("p=%p, q=%p\n", (void*)p, (void*)q);

    return 0;
}
