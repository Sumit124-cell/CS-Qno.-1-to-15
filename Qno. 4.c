//write a c program to print the sum and product of digits of an integer

#include <stdio.h>
int main() {
    int num, sum = 0, product = 1, digit;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    num = (num < 0) ? -num : num;

   
    while (num > 0) {
        digit = num % 10;      
        sum += digit;          
        product *= digit;      
        num /= 10;             
    }


    printf("Sum of digits: %d\n", sum);
    printf("Product of digits: %d\n", product);

    return 0;
}
