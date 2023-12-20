// Q3.WaP to print 1 to N using for loop.
#include <stdio.h>
int main()
{

    int i = 1, n;

    printf("\n enter no");
    scanf("%d ",&n);
   
    for (; i <= n; i++)
    {
      printf("\n %d", i);
    }
    

    return 0;
}