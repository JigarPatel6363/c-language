//5. Write C program matrix convert into transpose matrix.
// convert into transpose matrix
#include<stdio.h>
int main(){
    int a[20][20],i,j,m,n,t[20][20];
    printf("enter size of row and colume::");
    scanf("%d %d",&m,&n);

    printf("enter elements:");
    for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < n; j++)
       {
       scanf("%d",&a[i][j] );
       } 
    } 
    printf("\n metrix \n");
     for ( i = 0; i < m; i++){
       for ( j = 0; j < n; j++){
        printf("%d ",a[i][j] ); 
       } 
       printf("\n");
    }
   if (i==j)
   {
       printf("\n convert into transpose matrix\n");
      for ( i = 0; i < m; i++){
       for ( j = 0; j < n; j++){
        printf("%d ",a[j][i] ); 
       } 
       printf("\n");
    }
   }else{
      printf("that is not transpose beacause this matrix are not squre ");
   }
   
    return 0;
}