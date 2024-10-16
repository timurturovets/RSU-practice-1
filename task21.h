#pragma once
#include <string.h>

int to_dec(char* num, int b) {
    int i = 0, result = 0, len = strlen(num), value, sign = 1;
    char *digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if(num[0] == '-') {
        sign = -1;
        i++;
    }

    for(;i < len; i++) {
        value = strcspn(digits, &num[i]);

        if (i == len - 1) {
            result += value;
            break;
        }

        result += value;
        result *= b;
    }
    result *= sign;
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