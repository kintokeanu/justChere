#include <stdio.h>

void swap_int(int *a, int *b);

int main(void)
{
    int a = 98, b = 42;
    printf("a = %d, b = %d\n", a, b);
    swap_int(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return (0);
}

void swap_int(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}