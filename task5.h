#pragma once
#include <stdio.h>

int binary_search(int arr[], int len, int target) {
	int left = 0, right = len - 1, center;

	while (left <= right) {
		center = left + (right - left) / 2;

		if (arr[center] == target) return center;
		else if (target > arr[center]) left = center + 1;
		else right = center - 1;
	}

	return -1;
}

void task5() {
	int target, len, result;
	int array[10] = { 1, 3, 7, 15, 21, 39, 45, 66, 80, 150 };

	len = sizeof(array) / sizeof(array[0]);

	printf("Input target value: ");
	scanf_s("%d", &target);

	result = binary_search(array, len, target);
	if (result == -1) printf("Your value is not in the array.");
	else printf("Your value is found in the array at index %d", result);
}