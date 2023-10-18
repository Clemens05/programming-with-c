#include <stdio.h>

void e_calc() {
    long long int fak = 1;
    int i = 1;
    double eps = 10e-20;
    double e_akt = 0;
    double e_pre = -1;

    while ((e_akt - e_pre) >= eps) {
        e_pre = e_akt;
        e_akt += 1 / (double) fak;

        fak *= i;
        i++;
    }

    printf("e ≈ %.20f\n", e_akt);
}
