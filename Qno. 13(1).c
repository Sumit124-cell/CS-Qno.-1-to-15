//write a program to calculate factorial of a number (1) using recursion
#include<stdio.h>
int factorial(int n){
    if (n==0 || n==1 ) return 1;
    if (n<0)
    {
        return (n*factorial(n+1));
    }
    return (n*factorial(n-1));
}
int main(){
    int n;
    printf("Enter a natural number: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial(n));
    return 0;
}