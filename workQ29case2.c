#include <stdio.h>
int main()

{
int i ;
float h1,h2,h3,h4,h5,h6,h7,h8,h9,h10,Average,Sum=0 ;

printf("Enter high 1 :");
  scanf("%f",&h1);

printf("Enter high 2 :");
  scanf("%f",&h2);
  
printf("Enter high 3 :");
  scanf("%f",&h3);
  
printf("Enter high 4 :");
  scanf("%f",&h4);
  
printf("Enter high 5 :");
  scanf("%f",&h5);
  
printf("Enter high 6 :");
  scanf("%f",&h6);
  
printf("Enter high 7 :");
  scanf("%f",&h7);
  
printf("Enter high 8 :");
  scanf("%f",&h8);
  
printf("Enter high 9 :");
  scanf("%f",&h9);
  
printf("Enter high 10 :");
  scanf("%f",&h10);

Sum = Sum+h1+h2+h3+h4+h5+h6+h7+h8+h9+h10;
Average = Sum / 10 ;
printf("\nSum = %.2f ",Sum);
printf("\nAverage = %.2f ",Average);
}