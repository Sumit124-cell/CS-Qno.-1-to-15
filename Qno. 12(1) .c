//write a program to display Fibonacci series (1) using recursion
#include<stdio.h>
int nthFibonacci(int n){ 
   if(n<=1){   
       return n;
   }
   return nthFibonacci(n-1)+nthFibonacci(n-2); 
}
int main() { 
   int n; 
   printf("Enter the numbers of terms in the Fibonacci Series\n");
   scanf("%d",&n);
   printf("The first %d numbers in the Fibonacci Series are \n",n);
   for(int i=0;i<n;i++){
   int curr=nthFibonacci(i); 
   printf("%d ",curr);
   }
}