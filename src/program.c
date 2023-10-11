#include <stdio.h>

void e() {
    int x = 34;
    double result = 0;

    for(int i = 0; i < x; ++i) {
        int fak_result = 1;

        for(int j = i; j >= 1; --j) {
            fak_result = fak_result * j;
        }

        if (i == 0) {
            fak_result = 1;
        }

        result += 1 / (double)fak_result;
    }

    printf("e ≈ %.17f\n", result);
}

void beverages() {
    int sorte;
    float preis;
    float einwurf;

    const double price_water = 0.50;
    const double price_cola = 1.00;
    const double price_beer = 2.00;

    const int index_water = 1;
    const int index_cola = 2;
    const int index_beer = 3;

    printf("%d - Wasser %.2f €\n", index_water, price_water);
    printf("%d - Cola   %.2f €\n", index_cola, price_cola);
    printf("%d - Bier   %.2f €\n", index_beer, price_beer);

    printf("\n\n");

    do {
        printf("Wählen Sie ein Getränk: ");
        scanf("%d", &sorte);
    } while (!(sorte == index_water || sorte == index_cola || sorte == index_beer));

    int price;
    switch (sorte) {
        case 1:
            price = price_water;
            break;
        case 2:
            price = price_cola;
            break;
        case 3:
            price = price_beer;
            break;
        default:
            price = 0;
            break;
    }

    printf("\n\n");

    do {
        float new_einwurf;
        printf("Bitte werfen Sie Münzen ein (Stand: %.2f €): ", einwurf);
        scanf("%f", &new_einwurf);

        einwurf += new_einwurf;
    } while (einwurf < price);

    printf("\n\n");

    printf("Gibt Getränk %d und %.2f € Rückgeld aus...\n", sorte, einwurf - price);
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

    // beverages();

    e();

    return 0;
}
