#include<stdio.h>
int main(){
    int number,symb,space,row,a;
    scanf("%d",&number);
    
    for(row = 0; row<number; row++){
        for(symb = 0;  symb<row ; symb++){
            printf("*");
        }
        for(space=1; space<=(2*number-1)-2*row ; space++){
            printf(" ");
        } 
        for(symb = 0;  symb<row ; symb++){
            printf("*");
        }
        printf("\n");
    }
    
    for(a=0 ; a<(2*number)-1 ; a++){
        printf("*");
    }    
    printf("\n");
    
    for(row=number-1; row>0 ; row--){
        for(symb=0; symb<row ; symb++){
            printf("*");
        }       
        for(space=0; space<(2*number-1)-2*row ; space++){
            printf(" ");
        } 
        for(symb = 0;  symb<row ; symb++){
            printf("*");
        }
    printf("\n");
    }
    return 0;
} 