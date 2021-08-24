int main ( ) {
     int r= 0, c, n;
     printf("Enter number : ");
     scanf("%d",&n);
     if(n<=0){
        printf("error");
     }
    else{
        while (r < n) {
          for (c = 0; c <= r; c++) {
               printf("*");
          }
          printf("\n");
          r++;
        }
    }
return 0;
}
