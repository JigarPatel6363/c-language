//2.WAP to find if a given nunmber is divisible by 3 & 5 both or not using UDF.

#include<stdio.h>
void cube( int nunmber);

   void main(){
    int nunmber;

    printf("enter no :");
    scanf("%d",&nunmber);
    cube(nunmber);

}
    void cube( int nunmber){

        if (nunmber%3 ==0&& nunmber%5 ==0)
        {
            printf("number is divisible by 3&5");

        }else{
        
        printf("number is not divisible by 3&5");


        }
        





}

