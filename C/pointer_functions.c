/*  This program swaps values by passing variables as pointers into a function in C.
 *  Author: h1110050
 *  Profile: http://github.com/h1110050
 */

#include <stdio.h>

void swap(int *, int *);

int main(void) {
    int a = 1, b = 3;

    printf("a is %d, b is %d\n", a, b);

    // Pass in the address if you want the change to persist in main function.
    swap(&a, &b);

    printf("a is %d, b is %d\n", a, b);

    return 0;
}

void swap(int *a, int *b) {
    int temp;

    // Swap the pointers.
    temp = *a;
    *a = *b;
    *b = temp;
}
