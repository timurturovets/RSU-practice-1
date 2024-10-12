#pragma once
#include <stdio.h>
#include "arrays.h"

void task7() {
	int array[15] = { 52, 4, 3, 6, 7, 8, 7, 5, 3, 10, 55, 41, 5, 6, -52 },
		new_arr[8];

	printf("Array:\n");
	print_arr(array, 15);

	int i, j = 0;
	for (i = 0; i < 15; i += 2) {
		new_arr[j] = array[i];
		j++;
	}

	printf("\nNew array:\n");
	print_arr(new_arr, 8);
}