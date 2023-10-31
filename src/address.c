#include <stdio.h>

struct SAddress {
    char name[255];
    char roadName[255];
    char houseNumber[255];
    int zip;
    char city[255];
};

typedef struct SAddress Address;

const int length = 100;
Address addresses[length];

void print_address(int pos) {
    Address address = addresses[pos];

    printf("Name          %s\n", address.name);
    printf("Road name     %s\n", address.roadName);
    printf("House number  %s\n", address.houseNumber);
    printf("ZIP/PLZ       %d\n", address.zip);
    printf("City          %s\n", address.city);
}

void print_addresses() {
    printf("### All addresses ###\n");

    for (int i = 0; i < length; i++) {
        if (addresses[i].zip != 0) {
            printf("\n");
            printf("📫 Address No. %d\n", i);
            print_address(i);
        }
    }
}

void insert_address(int pos, Address address) {
    addresses[pos] = address;
}

void add_address(
    int pos,
    char name[255],
    char roadName[255],
    char houseNumber[255],
    int zip, char city[255]
) {
    Address new_address;
    str_replace(new_address.name, name);
    str_replace(new_address.roadName, roadName);
    str_replace(new_address.houseNumber, houseNumber);
    new_address.zip = zip;
    str_replace(new_address.city, city);

    insert_address(pos, new_address);
}

void swap_addresses(int pos1, int pos2) {
    Address address1 = addresses[pos1];
    Address address2 = addresses[pos2];

    addresses[pos1] = address2;
    addresses[pos2] = address1;
}
