#include <stdio.h>

void chess_field() {
    for (int i = 1, j = 1; i <= 64; i++) {
        if (j % 2 == 0) {
            printf("⬛");
        } else {
            printf("⬜");
        }

        if (i % 8 == 0) {
            printf("\n");
            j -= 2;
        } else {
            j++;
        }
    }
}
