#include <stdio.h>

void getraenke() {
    int sorte;
    float preis;
    float einwurf;

    const double price_water = 0.50;
    const double price_cola = 1.00;
    const double price_beer = 2.00;

    printf("1 - Wasser %.2f €\n", price_water);
    printf("2 - Cola   %.2f €\n", price_cola);
    printf("3 - Bier   %.2f €\n", price_beer);
    printf("Wählen Sie ein Getränk: ");

    scanf("%d", &sorte);

    printf("\n\nWerfen Sie eine Münze ein (0.5, 1, 2): ");
    scanf("%f", &einwurf);

    printf("\n\n");

    switch (sorte) {
        case 1:
            if (einwurf == price_water) {
                printf("...gibt Wasser aus\n");
            } else {
                printf("Falscher Einwurf\n");
            }
            break;
        case 2:
            if (einwurf == price_cola) {
                printf("...gibt Cola aus\n");
            } else {
                printf("Falscher Einwurf\n");
            }
            break;
        case 3:
            if (einwurf == price_beer) {
                printf("..gibt Bier aus\n");
            } else {
                printf("Falscher Einwurf\n");
            }
            break;
        default:
            printf("Ungültige Eingabe\n");
            break;
    }
}

void leap_year() {
    printf("Gib ein Jahr ein: ");
    int date;
    scanf("%d", &date);

    if (date % 4 == 0 && (date % 100 != 0 || date % 400 == 0)) {
        printf("%d ist ein Schaltjahr\n", date);
    } else {
        printf("%d ist kein Schaltjahr\n", date);
    }
}

int arithmetic_operations() {
    int a = 5;
    int b = 2;
    int c = a + b * 2;

    return c;
}

int bit_operators() {
    int c = 9 >> 1;

    return c;
}

int scan() {
    int v;

    printf("Enter int value: ");
    scanf("%d", &v);
    return v;
}

int main() {
    // printf("[9] arithmetic_operations(): %d\n", arithmetic_operations());
    // printf("[4] bit_operators(): %d\n", bit_operators());
    // printf("[?] scan(): %d\n", scan());

    // leap_year();

    getraenke();

    return 0;
}
