//Q7. WaP to Find leap year from 2000 to 3000 using for loop.

#include<stdio.h>
int main(){

    for ( int i=2000; i<=3000; i++)
    {
        if (i%4==0)
        {
            printf("%d \n",i);
        }
    }
    
    return 0;
    
}