//Q2. Write C program to check a number is even or odd using ternary operator.


#include <stdio.h>
int main() {
    int num;
    printf("Enter  number ");
    scanf("%d", &num);

    (num%2==0)?printf("num is even"): printf("num is odd");
    
    return 0;
}