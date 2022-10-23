#include <stdio.h>
#include <stdlib.h>

int f1(int a, int b) { return f2(a + b); }

int f2(int a) { return a * a; }

int main(void) {
    printf("%d\t%d\n", f1(1, 2), f2(3));
    printf("%d\t%d\n", f1(4, 5), f2(6));
    return EXIT_SUCCESS;
}
