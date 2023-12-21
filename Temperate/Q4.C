//Q4.Write C program to find sum of first and last digit of a number.

#include<stdio.h>
int main(){

  int n,fast,last,j;
  printf("\n enter no");
  scanf("%d",&n);

  j=n;
  last=j%10;
  while (n>0)
  {
    fast=n%10;
    n=n/10;
  }
  
    printf("\n fast &last digit sum: %d",fast+last);

    return 0;
}