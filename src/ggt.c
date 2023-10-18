int ggt(int a, int b) {
    if (a == b) {
        return a;
    } else {
        if (a > b) {
            return ggt(b, a-b);
        } else {
            return ggt(a, b-a);
        }
    }
}

int ggt_iterativ(int a, int b) {
    while (a != b) {
        if (a > b) {
            int m = a;
            a = b;
            b = m - b;
        } else {
            b -= a;
        }
    }

    return a;
}

void calc_ggt(int a, int b) {
    int res = ggt(a, b);

    printf("ggt_rekursiv(%d, %d) = %d\n", a, b, res);
}

void calc_ggt_iterativ(int a, int b) {
    int res = ggt_iterativ(a, b);

    printf("ggt_iterativ(%d, %d) = %d\n", a, b, res);
}

void ggt_test() {
    calc_ggt(60, 42);
    calc_ggt_iterativ(60, 42);

    printf("\n");

    calc_ggt(98, 428);
    calc_ggt_iterativ(98, 428);

    printf("\n");

    calc_ggt(24, 60);
    calc_ggt_iterativ(24, 60);
}
