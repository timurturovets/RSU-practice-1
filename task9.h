#pragma once
#include "arrays.h"
#include <stdlib.h>

int comp(const void* a, const void* b) {
	if (*(double*)a > *(double*)b) return 1;
	else if (a == b) return 0;
	else return -1;
}

void task9() {
	int i, j = 1, len;

	double array[] = { 1.5, 2.114, 22.22, 20.24, 1.5, 1.6, 1.8, 1.91, 20.23, 20.24 },
		new_arr[10];
	
	len = sizeof(array) / sizeof(array[0]);

	printf("Array:\n");
	print_arr_d(array, len);

	qsort(array, len, sizeof(array[0]), comp);

	double prev = array[0];
	new_arr[0] = prev;
	for (i = 1; i < len; i++) {
		if (array[i] == prev) continue;

		prev = array[i];
		new_arr[j++] = array[i];
	}

	printf("\nNew array:\n");
	print_arr_d(new_arr, j);
}