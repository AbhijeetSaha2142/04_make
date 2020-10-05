#include "euler.h"
#include <stdio.h>

int main() {
    // Euler #1
    int ans1 = one(1000);
    printf("Euler 1: %d \n", ans1);

    // Euler #2
    int ans2 = two(4000000);
    printf("Euler 2: %d \n", ans2);

    // Euler #3
    int ans3 = three(600851475143);
    printf("Euler 3: %lld \n", ans3);

    return 0;
}