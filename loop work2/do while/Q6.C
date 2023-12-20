//Q6. WaP to print even no. from N to 1 using do whIle loop.

#include<stdio.h>
int main(){

    int j;
    printf("\n enter no.");
    scanf("%d",&j);
  
    do
    {
      if (j%2==0)
        {
            printf("%d \n",j);
        }
        j--;
    } while (j>=1);
    
    return 0;
    
}