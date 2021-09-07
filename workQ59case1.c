#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char str[50];
	char* ptr;
	ptr = str;
	scanf("%s", str);
	while (*ptr != '\0') ptr++;
	ptr--;
	while (ptr >= str) {
		printf("%c", *ptr);
		ptr--;
	}

	return 0;
}