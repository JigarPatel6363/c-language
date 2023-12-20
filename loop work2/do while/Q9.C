//Q9.WaP to calculate the factor,al of N. using do while loop.

#include<stdio.h>
int main(){

    int i=1,n,j=1;
    printf("\n enter no.");
    scanf("%d",&n);

    do
    {
        j*=i;
        i++;
    } while (i<=n);
    
    printf("Factorial is %d",j);
    return 0;
    
}