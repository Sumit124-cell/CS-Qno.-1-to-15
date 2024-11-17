//write a c program to take input of two numbers and print their sum product and difference
#include <stdio.h>

int main() {
    int num1, num2, sum, product, difference;

    
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);


    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;


    printf("\nSum: %d", sum);
    printf("\nProduct: %d", product);
    printf("\nDifference: %d\n", difference);

    return 0;
}
