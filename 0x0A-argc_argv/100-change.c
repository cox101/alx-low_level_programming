#include <stdio.h>
#include <stdlib.h>
/**
 * Print the min number of the coin to make
 * a change for an ammount 
 * @argc: number of command line
 * @argv: array 
 * return 
 */

int minCoins(int cents) {
    if (cents < 0) {
        return 0;
    }

    int coins[] = {25, 10, 5, 2, 1};
    int numCoins = sizeof(coins) / sizeof(coins[0]);
    int count = 0;

    for (int i = 0; i < numCoins; i++) {
        while (cents >= coins[i]) {
            cents -= coins[i];
            count++;
        }
    }

    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }

    int cents = atoi(argv[1]);

    if (cents < 0) {
        printf("0\n");
    } else {
        int min = minCoins(cents);
        printf("%d\n", min);
    }

    return 0;
}

