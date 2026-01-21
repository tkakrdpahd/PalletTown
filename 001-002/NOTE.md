# 001-002

## Code
``` c
#include <stdio.h>

void add(int *a) {

    int temp = *a + 1;
    *a = temp;

    printf("In add(): a=%p, *a=%d\n", (void*)a, *a);

    return;
}

int main(void) {
    int i[] = {1, 20, 3};
    int j = 0;

    add(&j);

    int *p = i;
    int *q = &j;

    q = p + 1;
    j = *q + 1;

    printf("i[0]=%d, i[1]=%d, j=%d\n", i[0], i[1], j);
    printf("p=%p, q=%p\n", (void*)p, (void*)q);

    return 0;
}
```

## Pointer
...

## Assembly
### Background
Before continuing to illustrate assembly code, I think it would be good to briefly introduce a project called Super Mario Bros. Disassembly; [GitHub](https://gist.github.com/1wErt3r/4048722).

When I first saw the Super Mario Bros. Disassembly, the most impressive part was the implementation of the 2D Tile Map. Many modern game developers no longer look at such low-level languages, but looking at the utilization of two-dimensional arrays and memory for video games in the 1980s, one might feel a sense of beauty.

My first encounter with assembly goes back to my middle and high school days, when I was working with hardware recovery programs. I imagine that many developers who have dealt with assembly-level low-level programming started by working with the Linux kernel and bootloader, BIOS, or motherboard firmware.

When we go down to the level of CPU, GPU, or motherboard's firmware, we come across how specific memory addresses are understood and executed during the hardware load phase; for instance, the fixed memory addresses `0xF000` and `0xFFFFFFF0` that are first loaded when the power button is pressed. And if we go down to the level of directly handling sensors, we find ourselves calculating resistance and voltage, soldering, and sometimes smelling something burning.

### SP/LR Register

``` sh
objdump -d PalletTown > PalletTown.asm
# OR
objdump -D PalletTown > PalletTown.asm
```

It might be shocking to modern programmers that past programmers considered assembly instructions like `sub`, `stp`, and `add` to be intuitive. To return to a more intuitive understanding of pointers, we need to revisit assembly language. Using the above instructions, let's restore a C language file built into raw binary back into assembly code. Please note that since the device I'm currently working on is an Apple Macbook, the explanation will be based on the ARM architecture.

``` asm
0000000100000890 <_add>:
100000890: d100c3ff    	sub	sp, sp, #0x30
100000894: a9027bfd    	stp	x29, x30, [sp, #0x20]
100000898: 910083fd    	add	x29, sp, #0x20
10000089c: f81f83a0    	stur	x0, [x29, #-0x8]
1000008a0: f85f83a8    	ldur	x8, [x29, #-0x8]
1000008a4: b9400108    	ldr	w8, [x8]
1000008a8: 11000508    	add	w8, w8, #0x1
1000008ac: b81f43a8    	stur	w8, [x29, #-0xc]
1000008b0: b85f43a8    	ldur	w8, [x29, #-0xc]
1000008b4: f85f83a9    	ldur	x9, [x29, #-0x8]
1000008b8: b9000128    	str	w8, [x9]
1000008bc: f85f83aa    	ldur	x10, [x29, #-0x8]
1000008c0: f85f83a8    	ldur	x8, [x29, #-0x8]
1000008c4: b9400108    	ldr	w8, [x8]
1000008c8: 910003e9    	mov	x9, sp
1000008cc: f900012a    	str	x10, [x9]
1000008d0: f9000528    	str	x8, [x9, #0x8]
1000008d4: 90000000    	adrp	x0, 0x100000000 <_printf+0x100000000>
1000008d8: 91280000    	add	x0, x0, #0xa00
1000008dc: 94000046    	bl	0x1000009f4 <_printf+0x1000009f4>
1000008e0: a9427bfd    	ldp	x29, x30, [sp, #0x20]
1000008e4: 9100c3ff    	add	sp, sp, #0x30
1000008e8: d65f03c0    	ret
```

Stack Pointer/Link Register