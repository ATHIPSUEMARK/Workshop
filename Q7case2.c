#include<stdio.h>
main()
{
    int num[3];
    int i,j,max;
    for ( i = 0; i < 3; i++)
    {
        printf("Enter number:");
        scanf("%d",&num[i]);
    }
    max=num[0];
    for (j = 0; j < 3; j++)
    {
        if (max<num[j])
        {
            max=num[j];
        }   
    }
    printf("max = %d",max);
    return 0;
}