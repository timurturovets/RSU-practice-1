#pragma once
#include <string.h>

int to_dec(char* num, int b) {
    int i, result = 0, len, value;

    char *digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    len = strlen(num);
    for(i = 0; i < len; i++) {
        value = strcspn(digits, &num[i]);

        if (i == len - 1) {
            result += value;
            break;
        }

        result += value;
        result *= b;
    }

    return result;
}

void task21() {
    char *num = (char*) malloc(BUFSIZ * sizeof(char));
    int base, result;

    printf("Input your number: ");
    gets(num);

    printf("Input the base of your number: ");
    scanf("%d", &base);

    result = to_dec(num, base);
    printf("Your number in decimal: %d", result);
}