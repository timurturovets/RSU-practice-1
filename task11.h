#pragma once
#include <stdio.h>

int my_strlen(char* str) {
	int len = 0;
	while (*str != '\0') {
		len++;
		str++;
	}
	return len;
}

void task11() {
	char s1[] = "example 1", s2[] = "lorem -._  ipsum dolor sit&amet";
	int l1 = my_strlen(s1), l2 = my_strlen(s2);

	printf("%d %d", l1, l2);
}