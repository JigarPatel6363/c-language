//Q5. WAP to print odd no. from 1 to N using while loop.

#include<stdio.h>
int main(){

    int j=1,n;
    printf("\n enter no.");
    scanf("%d",&n);
    while (j<=n)
    {
        if (j%2!=0)
        {
            printf("%d \n",j);
        }
        
        j++;

    }
    return 0;
    
}