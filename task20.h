#pragma once
#include "task2.h"

char* to_any(int num, int b) {
    char *digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ",
        *result = (char*) malloc(BUFSIZ * sizeof(char)),
        *ptr = result;

    int sign = num >= 0 ? 1 : -1;
    num *= sign;

    while(num != 0) {
        *ptr++ = digits[num % b];
        num /= b;
    }
    if (sign == -1) *ptr++ = '-';
    *ptr = '\0';
    str_reverse(result);
    return result;
}

void task20() {
    int num, base;
    char *result;
    printf("Inpur your number: ");
    scanf("%d", &num);

    printf("Input the desired base: ");
    scanf("%d", &base);

    result = to_any(num, base);
    printf("Your number: ");
    puts(result);
}
