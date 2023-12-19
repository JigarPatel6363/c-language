// Q3.WaP to print 1 to N using while loop.

#include <stdio.h>
int main()
{

    int i = 1, n;

    printf("\n enter no");
    scanf("%d ",&n);

        while (i <= n)
    {
        printf("\n %d", i);
        i++;
    }

    return 0;
}