// Q4.WaP to print N to 1 using do while loop.

#include <stdio.h>
int main()
{

    int i;

    printf("\n enter no");
    scanf("%d ",&i);
    
    do
    {
    printf("\n %d", i);
        i--;
    } while (i >= 1);
    

    return 0;
}