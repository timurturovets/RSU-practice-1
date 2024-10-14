#pragma once
#include <stdio.h>

char* my_strcat(char* str1, char* str2) {
    size_t i, l1 = strlen(str1), l2 = strlen(str2);

    char* result = (char*) malloc((l1 + l2) * sizeof(char) + 1);
    char* ptr = result;

    for(i = 0; i < l1; i++) *ptr++ = str1[i];
    for(i = 0; i < l2; i++) *ptr++ = str2[i];
    *ptr = '\0';
    return result;
}

void task17() {
    char* string1 = (char*) malloc(BUFSIZ * sizeof(char)),
        *str2 = (char*) malloc(BUFSIZ * sizeof(char)),
        *result;

    printf("Input first string: ");
    gets(string1);

    printf("Input second string: ");
    gets(str2);

    result = my_strcat(string1, str2);
    printf("Concatenated strings: ");
    puts(result);
}