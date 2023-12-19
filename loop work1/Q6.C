//Q6. WaP to print even no. from N to 1 using whIle loop0.

#include<stdio.h>
int main(){

    int j;
    printf("\n enter no.");
    scanf("%d",&j);
    while (j>=1)
    {
        if (j%2==0)
        {
            printf("%d \n",j);
        }
        j--;

    }
    return 0;
    
}