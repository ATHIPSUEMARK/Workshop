#include<stdio.h>
int x,y;
void main()
{
    printf("number : ");
    scanf("%d",&x);
    for(y=1;y<=x;y++)
    {
        printf("*");
    }
}