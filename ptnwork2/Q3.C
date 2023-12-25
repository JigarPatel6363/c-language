//Q.3 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 5; i >= 1; i--)
    {
        for (k = i; k >= 1; k--)
        {
            printf(" ");
        }
        for (j = i; j <= 5; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}