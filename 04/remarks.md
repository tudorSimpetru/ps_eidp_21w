# Remarks for recursive functions (and functions in general)

- Never use global functions if it is not strictly necessary!

If the student that presented did not use global variables copy this code and show it to students. observe this
implementation of the print binary function:

```C
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int printed_digits;

void print_binary(uint32_t n) {
    if (printed_digits >= 32) {
        printf("0b");
        return;
    }
    ++printed_digits;
    print_binary(n / 2);
    printf("%d", n % 2);
}

int main(void) {
    uint32_t n;
    printf("n: ");
    if (scanf("%" SCNu32, &n) != 1) {
        fprintf(stderr, "ERROR: not a valid 'uint32_t' value!");
        return EXIT_FAILURE;
    }
    printf("\n");

    printf("%" PRIu32 " = ", n);
    print_binary(n);
    printf("\n%" PRIu32 " = ", n);
    print_binary(n + 1);

    return EXIT_SUCCESS;
}

```

It relies on the global state. Show the above implementation and execute the code. Show that it works.

Then call the `print_binary` function again with `n + 1` and show that it does not print the expected value anymore
because it relies on the global state. This should not happen. Ask for student solutions that do not have this problem
and let them present their solution if it was not already done.
