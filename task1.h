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