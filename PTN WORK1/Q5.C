//Q5. Write a Program to print the below pattern using nested for loop.

#include<stdio.h>
int main (){
    for (int i=1; i<=5; i++){
        for (int j=1; j<=5; j++){
            if (j>=i){
                printf("%d",i);
            }  
        }
        printf("\n");
    }
    return 0;
}