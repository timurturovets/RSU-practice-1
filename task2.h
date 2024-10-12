#pragma once
#include <string.h>

void str_reverse(char* str) {
	int start = 0, end = strlen(str) - 1;

	char t;
	while (start < end) {
		t = str[start];
		str[start] = str[end];
		str[end] = t;
		start++; end--;
	}
}