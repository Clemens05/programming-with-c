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