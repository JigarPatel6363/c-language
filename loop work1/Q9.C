//Q9.WaP to calculate the factor,al of N. using while loop.

#include<stdio.h>
int main(){

    int i=1,n,j=1;
    printf("\n enter no.");
    scanf("%d",&n);
    while (i<=n)
    {
        j*=i;
        i++;

    }
    printf("Factorial is %d",j);
    return 0;
    
}