//Q6. WaP to print even no. from N to 1 using FOR loop.

#include<stdio.h>
int main(){

    int j;
    printf("\n enter no.");
    scanf("%d",&j);
  
   

    for (; j>=1;  j--)
    {
        
      if (j%2==0)
        {
            printf("%d \n",j);
        }
    }
    
    
    return 0;
    
}