// Q8. Program Check weather num is prime or not

#include <stdio.h>
int main()
{

    int i = 1, n, count;
    printf("\n enter no");
    scanf("%d", &n);

    while (i <= n)
    {
        if (n % i == 0)
        {
            count++;
        }
        i++;
    }
    if (count < 2)
    {
        printf("\n it is prime no");
    }
    else
    {
        printf("\n it is not prime no");
    }

    return 0;
}