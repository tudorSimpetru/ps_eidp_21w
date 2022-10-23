#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

/* TODO: Add function(s) */

int main(void) {
    uint32_t value;
    printf("value: ");
    if (scanf("%"SCNu32, &value) != 1) {
        fprintf(stderr, "ERROR: While reading the 'uint32_t' value an error occurred!");
        return EXIT_FAILURE;
    }
    printf("\n");
    print_binary(value);
    printf("\n");
    return EXIT_SUCCESS;
}
