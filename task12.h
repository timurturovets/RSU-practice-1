#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int my_strstr(char* str, char* target) {
    int i, j, k, flag;

    for(i = 0; i < strlen(str); i++) {
        if (str[i] == target[0]) {
            k = i;
            flag = 1;
            for(j = 0; j < strlen(target); j++) {
                if (str[k] != target[j]) {
                    flag = 0;
                    break;
                }
                k++;
            }
            if (flag) return i;
        }
    }
    return -1;
}

void task12() {
    int result;
    char *str1 = (char*) malloc(BUFSIZ * sizeof(char)),
        *str2 = (char*) malloc(BUFSIZ * sizeof(char));

    printf("Input your string: ");
    gets(str1);

    printf("Input your substring: ");
    gets(str2);

    result = my_strstr(str1, str2);
    if (result == -1) printf("Your substring is not found in your string.");
    else printf("Your substring is found in your string at index %d", result);
}