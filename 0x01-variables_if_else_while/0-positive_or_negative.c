#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    /* Seed the random number generator */
    srand(time(NULL));

    /* Generate a random number and store it in the variable n */
    int n;
   n = rand() % (2 - RAND_MAX) - RAND_MAX;

    /* Check if n is positive, zero, or negative */
    if (n > 0) {
        printf("The number %d is positive\n", n);
    } else if (n == 0) {
        printf("The number %d is zero\n", n);
    } else {
        printf("The number %d is negative\n", n);
    }

    return 0;
}

