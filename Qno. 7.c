\\write a c program to compute the sum of the first n terms of the following series s = 1+1/2+1/3+1/4.....
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

  
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i; 
    }


    printf("Sum of the first %d terms of the series: %.6lf\n", n, sum);

    return 0;
}
