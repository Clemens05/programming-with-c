#include <stdio.h>

void draw_stars(const int n) {
    const int size = 2 * n - 1;
    int stars = 1;

    printf("n:    %d\n", n);
    printf("size: %d\n", size);
    printf("\n");

    for (int i = 1; i <= size; i++) {
        int whitespaces = (size - stars) / 2;

        for (int j = 0; j < whitespaces; j++) {
            printf("  ");
        }

        for (int j = 0; j < stars; j++) {
            printf("⭐");
        }

        printf("\n");

        if (i < n) {
            stars += 2;
        } else {
            stars -= 2;
        }
    }
}
