//write a program to display Fibonacci series (2) using iteration
#include<stdio.h>
int main(){
    int a,add,b=1,c=1 ;
    printf("Enter the term of fabonacci: ");
    scanf("%d",&a);
    printf("The fabonacci of %d term is ",a);
    if (a==1||a==2)
    {
        printf("%d",b);
    }
    else
    {
    for (int i = 3; i <= a; i++)
    {
        add=b+c;
        b=c;
        c=add;
    }
    printf("%d",add);
    }
}