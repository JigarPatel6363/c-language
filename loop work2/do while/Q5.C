//Q5. WAP to print odd no. from 1 to N using do while loop.

#include<stdio.h>
int main(){

    int j=1,n;
    printf("\n enter no.");
    scanf("%d",&n);
  
    do
    {
       if (j%2!=0)
        {
            printf("%d \n",j);
        }
        
        j++;
    } while (j<=n);
    
    return 0;
    
}