        //Q2. WAP to Find min. from given 3 no.uSing ne2tedifel2e
#include<stdio.h>

int main(){

    

    int a,b,c;
    printf("Enter your a,b,c:");
    scanf("%d %d %d",&a,&b,&c);

    if (a<b){
        if(a<c){
            printf("\n a is min");
        }else{
             printf("\n b is min");
        }
    }else{
        if(b<c){
             printf("\n b is min");
        }else{
             printf("\n c is min");
        }
    }
    
    return 0;
}