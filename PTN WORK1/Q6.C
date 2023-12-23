//Q5. Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
int main (){
    for (int i=5; i>=1; i--){
        for (int r=1; r<=5; r++){
            if (r<=i){
                if (r%2==0)
                {
                    printf("0");
                }else
                {
                    printf("1");
                }             
            }  
        }
        printf("\n");
    }
    return 0;
}