#include <stdio.h>
#include <stdlib.h>

struct my_struct {
    float x;
    double y;

};

int main(void) {
    printf("size of my_struct: %lu\n", sizeof(struct my_struct));
    return EXIT_SUCCESS;
}
