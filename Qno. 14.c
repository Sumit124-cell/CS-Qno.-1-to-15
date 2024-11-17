//write a program in which a function is passed address of two variables and then alter its contents 
#include <stdio.h>
void alter(int *a ,int *b){
*a=3;
*b=4;
return;
}
int main(){
    int a=1,b=2;
    printf("a=%d,b=%d \n",a,b);
    alter(&a,&b);
    printf("a=%d,b=%d",a,b);
    return 0;
}