// Q3.WaP to print 1 to N using do while loop.

#include <stdio.h>
int main()
{

    int i = 1, n;

    printf("\n enter no");
    scanf("%d ",&n);
     do
    {
      printf("\n %d", i);
        i++; 
    } while (i <= n);
    

    return 0;
}