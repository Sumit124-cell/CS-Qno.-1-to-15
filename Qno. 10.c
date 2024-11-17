//write a function to find whether a given number is prime or not. use the same to generate the prime number less then 100
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not a prime number
        }
    }
    return 1; // Prime number
}

int main() {
    // Generate and print prime numbers less than 100
    printf("Prime numbers less than 100 are:\n");
    for (int i = 2; i < 100; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
