//Q10.WaP to print thr multiplication table of N using while loop.

#include<stdio.h>
int main(){

    int j=1,n;
    printf("\n enter no.");
    scanf("%d",&n);
    while (j<=10)
    { 
         printf(" \n %d * %d %d",n,j,n*j);
        
        j++;
    }
   
   
    return 0;
    
}