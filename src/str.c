int str_len(char str[]) {
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }

    return i;
}

void str_flip(char str[]) {
    int i = 0;
    int j = str_len(str) - 1;

    while (i < j) {
        char t = str[i];
        str[i] = str[j];
        str[j] = t;

        i++;
        j--;
    }
}

int str_vocals(char str[]) {
    int a = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];

        if (c == 'a'
        || c == 'e'
        || c == 'i'
        || c == 'o' 
        || c == 'u' 
        || c == 'A' 
        || c == 'E' 
        || c == 'I' 
        || c == 'O' 
        || c == 'U') {
            a++;
        }
    }

    return a;
}

void str_replace(char str[], char repl[]) {
    for (int i = 0; str[i] != '\0' || repl[i] != '\0'; i++) {
        str[i] = repl[i];
    }
}

int str_equals(char str1[], char str2[]) {
    int len1 = str_len(str1);
    int len2 = str_len(str2);

    if (len1 != len2) {
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }

    return 1;
}
