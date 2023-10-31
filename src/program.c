#include <stdio.h>
#include "bit_operators.c"
#include "leap_year.c"
#include "beverages.c"
#include "e_calc.c"
#include "draw_stars.c"
#include "ggt.c"
#include "sep.c"
#include "chess_field.c"
#include "print_convert.c"
#include "str.c"
#include "address.c"

int main() {
    add_address(1,
                "Clemens Rustemeier",
                "Fürstenallee",
                "32b",
                34509,
                "Paderborn");

    add_address(8,
                "Max Mustermann",
                "Detmolder Straße",
                "53",
                32902,
                "Paderborn");

    add_address(15,
                "M. Musterfrau",
                "Kurfürstendamm",
                "192c",
                24390,
                "Berlin");

    add_address(15,
                "Prof. Dr. M. Musterfrau",
                "Kurfürstendamm",
                "192c",
                24390,
                "Berlin");

    swap_addresses(1, 8);

    print_addresses();

    return 0;
}
