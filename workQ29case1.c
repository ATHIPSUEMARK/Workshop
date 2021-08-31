#include <stdio.h>
int main()

{
int i ;
float High,Average,Sum=0 ;
for (i = 1; i<=10;i=i+1)
 {
  printf("high #%d = ",i);
  scanf("%f",&High);
  Sum = Sum + High ;
 } 
Average = Sum / 10 ;
printf("\nSum = %.2f ",Sum);
printf("\nAverage = %.2f ",Average);
}