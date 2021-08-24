int main ( ) {
     int r, c, n;
     printf("Enter number : ");
     scanf("%d",&n);
     if(n>0){
     for (r = 0; r < n; r++) {
          for (c = 0; c <= r; c++) {
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
