#include <stdio.h>
#include "task1.h"
#include "task2.h"
#include "task3.h"

int main(void)
{
    int a = 100, b = 200;
    swap(&a, &b);
    printf("a: %d, b: %d", a, b);
}