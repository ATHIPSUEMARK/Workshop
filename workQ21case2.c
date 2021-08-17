#include<stdio.h> 
int main()
{
    int input;
    int i=0, j;
     
    printf("Enter number : ");
    scanf("%d", &input);
    if (input>0)
    {
        while(i < input)
        {
            i++;
                for(j = 0; j < input; j++)
                {
                    printf("*");
                }
            printf("\n");
        }
    }
    else{
        printf("error");
    }
    return 0;
}