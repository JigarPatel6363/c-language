     //Q3. WAP to Find max. from given 4 no. using nested if else.



 #include<stdio.h>

int main(){
    


    int a,b,c,d;
    printf("Enter your a,b,c,d:");
    scanf("%d %d %d %d",&a,&b,&c,&d);




    if(a>b){
        if(a>c){
            if(a>d){
                printf("\n a is max");
            }else{
                  printf("\n b is max");
            }
        }else{
            if(c>d){
                  printf("\n c is max");
               
            } else{
                  printf("\n d is max");
            }
        }
    }else{
        if(b>c){
            if(b>d){
                  printf("\n b is max");
            } else{
                  printf("\n d is max");
            }            
        }else{
              if(c>d){
                  printf("\n c is max");
               
            } else{
                  printf("\n d is max");
            }
        }

    }



 
    
    return 0;
}
