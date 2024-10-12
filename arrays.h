#include <stdio.h>
// TODO: polymorphism

void print_arr(int arr[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
}

void print_arr_d(double arr[], int len) {
	for (int i = 0; i < len; i++) {
		printf("%g ", arr[i]);
	}
}

void bubble_sort(int a[], int n) {
	int i, j, t;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}

void bubble_sort_d(double a[], int n) {
	int i, j;
	double t;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
}