//Q2. W=P to print month names using switch case.

#include<stdio.h>
int main(){
  int in,out;
  printf("/n enter your choice");
  printf("/n press 1 for english.");
  printf("/n hindi ke liye 2 dabayein.");
  printf("/n gujrati mate 3 dabavo");
  scanf("/n %d",&in);
  if(in<=4){
  switch(in){
    case 1: 
    printf("/n press 1 for recharge");
    printf("/n press 2 for help");
    printf("/n press 3 for exit");
    scanf("/n enter your choice %d",&out);          
     break;
      switch(out){
        case 1:
         printf("/n recharge successfull");
          break;
         case 2:
         printf("/n we are happy to help you.!");
          break;
         case 3:
         printf("/n exit ok.");
          break;
      }

    case 2: 
    printf("/n recharge karne ke liye 1 dabayein");
    printf("/n sahayta prapt karne k liye 2 dabayein");
    printf("/n exit karne k lie 3 dadbayein");
    scanf("/n enter your choice %d",&out);   
     break;
      switch(out){
        case 1:
         printf("/n aapka recharge safaltapurvak ho gaya. ");
        break;
        case 2:
         printf("/n aapki sahayta prakriya purnn hui. ");
        break;

        case 3:
         printf("/n exit ok. ");
        break;

      }

    case 3: 
    printf("/n recharge krwa mate 1 dabavo.");
    printf("/n sahayta prapt karwa mate 2 dabavo.");
    printf("/n exit karwa mate 3 dabavo.");
    scanf("/n enter your choice %d",&out);    
    break;
      switch(out){
        case 1:
         printf("/n tamaro recharge safaltapurvak thai gayu.");
        break;

        case 2:
         printf("/n tamari sahayta prakriya purnn thai.");
        break;

        case 3:
         printf("/n exit ok.");
        break;
      }
      default :
      printf("/n invalid choice.");
  }
}

  return 0;
}