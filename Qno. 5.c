\\write a c program to print a triangle of stars as follows (take number of lines from user)
#include <stdio.h>

int main() {
    int lines;

   
    printf("Enter the number of lines: ");
    scanf("%d", &lines);


    for (int i = 1; i <= lines; i++) {
        
        for (int j = 1; j <= lines - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
