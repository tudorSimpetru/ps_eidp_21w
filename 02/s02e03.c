#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int seconds;
    if (scanf("%d", &seconds) != 1) {
        printf("ERROR: While reading the 'int' value an error occurred!");
        return EXIT_FAILURE;
    }
    printf("%d\n", seconds);
    return EXIT_SUCCESS;
}
