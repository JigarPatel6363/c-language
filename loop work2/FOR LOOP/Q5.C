//Q5. WAP to print odd no. from 1 to N using for loop.

#include<stdio.h>
int main(){

    int j=1,n;
    printf("\n enter no.");
    scanf("%d",&n);
  
    for (; j<=n; j++)
    {
       if (j%2!=0)
        {
            printf("%d \n",j);
        }
        
    }
    
    
    return 0;
    
}