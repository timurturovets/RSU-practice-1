#pragma once
#include <stdlib.h>
#include "task4.h"

void task14() {
    FILE* fptr = NULL;
    fptr = fopen("D:\\Code\\solutions\\solutions\\example14.txt", "r");
    int i = 0, len;
    fscanf(fptr, "%d", &len);
    // assuming the first integer in the file is the amount of array's elements
    int* array = (int*) malloc(len * sizeof(int));
    while (!feof(fptr) && i < len) {
        fscanf(fptr, "%d", &array[i]);
        i++;
    }

    printf("Your array:\n");
    print_arr(array, len);

    int max = 0, imax = 0, min = 0, imin = 0;
    find_max_min(array, len, &max, &imax, &min, &imin);
    printf("\nBiggest element: %d, its index: %d", max, imax);
    printf("\nSmallest element: %d, its index: %d", min, imin);
}