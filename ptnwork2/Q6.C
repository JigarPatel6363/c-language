//Q.6 Write a Program to print the below pattern using nested for loop.
#include <stdio.h>

int main()
{
    int i, j, k;
    for (i = 1; i <= 5; i++)
    {
        for (k = i; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 5; j >= i; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}