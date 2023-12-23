//Q7. Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
int main (){  
    for (char i='A'; i<='E'; i++){
        for (char j='E'; j>='A'; j--){ 
            if (j<=i){
              printf("%c ",j);
            }
        }
        printf("\n");
    }
    return 0;
}