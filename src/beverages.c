#include <stdio.h>

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
