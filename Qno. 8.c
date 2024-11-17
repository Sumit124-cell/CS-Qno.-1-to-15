//write a c program to compute the sum of the first n terms of the following series s = 1-2+3-4+5-6....
#include <stdio.h>

int main() {
    int n;
        printf("enter the n terms which you want to compute : ");
        scanf ("%d",n);
            int sum = 0;
            for(int i=1; i<=n; i++){
                if (i/2!=0) sum = sum+i;
                else sum = sum-i;      
            }
         printf ("the %d sum of the series is %d",n,sum);   
            
          
    return 0;
}