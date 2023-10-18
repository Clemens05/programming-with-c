#include <stdio.h>

void print_convert(int n) {
    printf("dezimal:   %d\n", n);
    printf("oktal:     %o\n", n);
    printf("hexa:      %x\n", n);

    printf("binär_reversed: ");
    while (n != 0) {
        int n_mod = n % 2;
        printf("%d", n_mod);

        n /= 2;
    }
    printf("\n");
}
