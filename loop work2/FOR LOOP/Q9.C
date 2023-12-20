//Q9.WaP to calculate the factor,al of N. using for loop.

#include<stdio.h>
int main(){

    int i=1,n,j=1;
    printf("\n enter no.");
    scanf("%d",&n);

    for (;  i<=n; i++)
    {
       j*=i;
    }
    
    
    printf("Factorial is %d",j);
    return 0;
    
}