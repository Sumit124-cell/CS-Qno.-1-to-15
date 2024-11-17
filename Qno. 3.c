\\write a c program to find the smallest or the greatest of three numbers given as input
#include <stdio.h>

int main() {
    int num1, num2, num3;
    int smallest, greatest;


    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);


    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }


    if (num1 >= num2 && num1 >= num3) {
        greatest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        greatest = num2;
    } else {
        greatest = num3;
    }


    printf("\nSmallest number: %d", smallest);
    printf("\nGreatest number: %d\n", greatest);

    return 0;
}
