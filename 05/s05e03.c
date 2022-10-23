#include <stdio.h>
#include <stdlib.h>

#define LETTERS_SIZE 27

void count_letter_occurrence(char text[], int letters[]) {
    /* TODO: Implement */
}

void print_letter_occurrence(int letters[]) {
    /* TODO: Implement */
}

void letters_to_lower(char text[]) {
    /* TODO: Implement */
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "usage: %s <text>\n", argv[0]);
        return EXIT_FAILURE;
    }
    int letters[LETTERS_SIZE];
    /* TODO: Use functions */
    return EXIT_SUCCESS;
}
