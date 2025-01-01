#include <gb/gb.h>
#include <stdio.h>
#include <rand.h>

void main() {
    printf("Press A to roll\n\n");

    initrand(DIV_REG);

    uint8_t result;

    while (1) {
        waitpad(J_A);

        result = (rand() % 6) + 1;

        printf("Rolled: %d\n\n", result);
        waitpadup();
    }
}