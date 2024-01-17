//3. C program to reverse an array using pointers
#include<stdio.h>
int main(){                           
    int a[20],k,j,*ptr;
    printf("enter array of size = ");
    scanf("%d",&k);

    printf("enter array element \n");
    for ( j = 0; j < k; j++){
        scanf("%d",&a[j]);
    }
    ptr=&a[k-1];

    printf("entered array element = \n");
      for ( j = 0; j < k; j++){
        printf("%d ",*ptr--);
    }
    
return 0;
}