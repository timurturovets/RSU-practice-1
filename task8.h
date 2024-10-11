#include <stdio.h>
#include "task7.h"

void task8() {
	int array[15] = { 77, 60, 49, 88, -101, 32, 40, 0, 9, 10, 5, -6, -12, 14, 18 },
		new_arr[15];

	printf("Array:\n");
	print_arr(array, 15);

	int i, j = 0;
	for (i = 0; i < 15; i++) {
		if (array[i] % 2 == 0) {
			new_arr[j] = array[i];
			j++;
		}
	}

	printf("\nNew array:\n");
	print_arr(new_arr, j);
}