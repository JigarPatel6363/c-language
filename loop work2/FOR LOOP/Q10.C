//Q10.WaP to print thr multiplication table of N using for loop.

#include<stdio.h>
int main(){

int j=1,n;
    printf("\n enter no.");
    scanf("%d",&n);
    
    for (; j<=10; j++)
    {
        printf(" \n %d * %d %d",n,j,n*j);
    }
    
     return 0;
    
}