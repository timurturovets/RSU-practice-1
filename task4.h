#pragma once
#include <stdlib.h>
#include <time.h>
#include "arrays.h"

void find_max_min(int array[], int len, int* max, int* imax, int* min, int* imin) {
    *max = INT_MIN,
            *min = INT_MAX,
            *imax = -1,
            *imin = -1;

    for (int i = 0; i < len; i++) {
        if (array[i] > *max) {
            *max = array[i];
            *imax = i;
        }

        if (array[i] < *min) {
            *min = array[i];
            *imin = i;
        }
    }
}
void task4() {
	srand(time(NULL));

	const int MIN = -10000, MAX = 10000;

	int array[10];
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % (MAX - MIN + 1) + MIN;
	}
	
	printf("Array:\n");
	for (int i = 0; i < 10; i++) printf("%d ", array[i]);

	int max, imax, min, imin;
	find_max_min(array, 10, &max, &imax, &min, &imin);

	printf("\nBiggest item: %d, its index: %d", max, imax);
	printf("\nSmallest item: %d, its index: %d", min, imin);
}
