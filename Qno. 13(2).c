//write a program to calculate factorial of a number (2) using iteration
#include<stdio.h>
int main(){
    int a,fac=1,t;
    printf("Enter a number : ");
    scanf("%d",&a);
    t=a;
    while (t!=1)
    {
        fac=fac*t;
        t--;
    }
    printf("factorial of %d is %d",a,fac);
    return 0;
}