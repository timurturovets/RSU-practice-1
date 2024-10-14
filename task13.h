#pragma once
#include <ctype.h>
#include <string.h>
#include <stdio.h>

void my_toupper(char* str) {
    int i;
    for(i = 0; i < strlen(str); i += 2) {
        str[i] = toupper(str[i]);
    }
}

void task13() {
    char* str = (char*) malloc(BUFSIZ * sizeof(char));

    printf("Input your string: ");
    gets(str);

    my_toupper(str);
    printf("Resulting string: ");
    puts(str);
}