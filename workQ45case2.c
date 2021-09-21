#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int factorial(int n)
{
    int temp = 1;
    for (size_t i = 1; i <= n; i++)
    {
        temp *= i;
    }
    return temp;
}

int main()
{
    printf("%d", factorial(5));
    return 0;
}