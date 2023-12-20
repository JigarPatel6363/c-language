//Q10.WaP to print thr multiplication table of N using do while loop.

#include<stdio.h>
int main(){

    int j=1,n;
    printf("\n enter no.");
    scanf("%d",&n);
    do
    {
        printf(" \n %d * %d %d",n,j,n*j);
        
        j++;
    } while (j<=10);
     return 0;
    
}