#include <stdlib.h>
#include <time.h>

void task4() {
	srand(time(NULL));

	const int MIN = -10000, MAX = 10000;

	int array[10];
	for (int i = 0; i < 10; i++) {
		array[i] = rand() % (MAX - MIN + 1) + MIN;
	}
	
	printf("Array:\n");
	for (int i = 0; i < 10; i++) printf("%d ", array[i]);

	int max = INT_MIN, 
		min = INT_MAX, 
		imax = -1, 
		imin = -1;

	for (int i = 0; i < 10; i++) {
		if (array[i] > max) {
			max = array[i];
			imax = i;
		}

		if (array[i] < min) {
			min = array[i];
			imin = i;
		}
	}

	printf("\nBiggest item: %d, its index: %d", max, imax);
	printf("\nSmallest item: %d, its index: %d", min, imin);
}