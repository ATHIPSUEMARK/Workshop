#include<stdio.h>
 
int main()
{   
    int loop=3;
    int input;
    int i;
    int max;
    for(i = 0; i < loop; i++)
    {
        printf(" Number #%d : ", i+1);
        scanf("%d", &input);
         
        if(i==0 || input > max)
        {
            max = input;
        }
    }
     
    printf("\n Maximum is %d\n\n", max);
     
    return 0;
}