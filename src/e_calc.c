void e_calc() {
    const int x = 34;
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
