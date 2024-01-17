//2. C program to input and print array elements using pointers

#include <stdio.h>
int main()
{
    int arr[50];
    int j, i;
    int * ptr = arr; 

    printf("Enter size of array: ");
    scanf("%d", &j);

    printf("Enter elements in array:\n");
    for (i = 0; i < j; i++)
    {
        scanf("%d", ptr);
        ptr++;   
    }
    ptr = arr;
    printf("Array elements: ");
    for (i = 0; i < j; i++)
    {
        printf("%d, ", *ptr);
        ptr++;
    }
    return 0;
}