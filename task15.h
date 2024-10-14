#pragma once
#include <stdio.h>
void task15() {
    int i, j = 0;
    char* str, *ptr;

    printf("Input your string: ");
    gets(str);

    char* newstr = (char*) malloc((strlen(str)) * sizeof(char) + 1);
    char *cpy = newstr;

    for(ptr = str; *ptr != '\0'; ptr++) {
        if (isdigit(*ptr)) *cpy++ = *ptr;
    }

    for(ptr = str; *ptr != '\0'; ptr++) {
        if (isalpha(*ptr)) *cpy++ = *ptr;
    }

    for(ptr = str; *ptr != '\0'; ptr++) {
        if (!isalnum(*ptr)) *cpy++ = *ptr;
    }

    *cpy = '\0';
    printf("Resulting string: ");
    puts(newstr);
    i = 0;
//    while(i < 10){
//        printf("%d", i);
//        i++;
//    }
}