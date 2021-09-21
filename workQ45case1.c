#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int factorial(int n)
{
    return (n < 2) ? 1 : n * factorial(n-1);
}

int main()
{
    printf("%d", factorial(5));
    return 0;
}