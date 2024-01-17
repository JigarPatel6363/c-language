//1. C program to swap two numbers using pointers

#include<stdio.h>                   

void swap(int *j , int *k);

void main(){
    int a,b;
    printf("enter two num ");
    scanf("%d %d",&a,&b);
    
    printf("\n before value");
    printf("\n a is = %d",a);
    printf("\n b is = %d \n",b);

    swap(&a,&b);
    
    printf("\n after value");
    printf("\n a is = %d",a);
    printf("\n b is = %d",b);

    return 0;
}

void swap(int *j , int *k){
    int z;
    z=*j;
    *j=*k;
    *k=z;
}