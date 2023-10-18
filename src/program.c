#include <stdio.h>
#include "bit_operators.c"
#include "leap_year.c"
#include "beverages.c"
#include "e_calc.c"
#include "draw_stars.c"
#include "ggt.c"
#include "sep.c"

void doxb(int n) {
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

int main() {
    sep_first("Stern");
    draw_stars(5);

    sep("Zahl als Dezimal-, Oktal-, Hexadezimal- und Binärzahl");
    doxb(167);

    return 0;
}
