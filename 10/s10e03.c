#include <stdio.h>
#include <stdlib.h>

/* TODO: Insert macros here */

#define DEBUG 3

#ifdef DEBUG
    #define  MY_VALUE 1
#else 
    #define MY_VALUE 10
#endif

#define MY_TRUE 1

#define MY_FALSE 0

#define MY_ASSERT(cond,txt) \
    if (cond) \
        printf(txt); \
    else \
        return EXIT_FAILURE;

#define COND_TO_STR(cond) \
    if (cond) \
        printf("true"); \
    else \
        printf("false")

#define PRINT_COND(cond) printf("'%s' evaluates to '%s'", cond, COND_TO_STR(cond))

#ifdef DEBUG
    #define PRINT_DEBUG(...) printf(__VA_ARGS__)
#endif

#if defined DEBUG && DEBUG==3
    #define PRINT_STATUS(...) \
    printf("%s:%d:%s ", __FILE__, __LINE__,__func__); \
    printf(__VA_ARGS__)
#else 
    #define PRINT_STATUS printf("%s:%d:%s ", __FILE__, __LINE__,__func__);
#endif

int main(void) {
    int x = MY_VALUE;
    int y = 5;

    PRINT_STATUS("program start!");

    PRINT_DEBUG("x: %d\n", x);
    PRINT_DEBUG("y: %d\n", y);

    PRINT_STATUS("before first assertion");
    MY_ASSERT(x < 0, "x less than 0!");

    PRINT_COND(MY_TRUE);
    PRINT_COND(MY_FALSE);
    PRINT_COND(y < x);
    PRINT_COND(12 + 34 / 12 > 0);

    PRINT_STATUS("before second assertion");
    MY_ASSERT(y < x, "stop program, y < x.");

    PRINT_STATUS("program end");
    return EXIT_SUCCESS;
}
