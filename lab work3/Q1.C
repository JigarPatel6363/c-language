// Q1. W=P to create/simulate telecom call service conversation scenario using nested switch case.

#include<stdio.h>
int main(){
         //int a,b;
         char ch;
         printf("\n J.january");
         printf("\n F.february");
         printf("\n m.march");
         printf("\n a.april");
         printf("\n M.may");
         printf("\n j.june");
         printf("\n K.july");
         printf("\n A.august");
         printf("\n s.september");
         printf("\n o.october");
         printf("\n n.naovember");
         printf("\n d.december");
 
         printf ("\n enatre your chois :");
         scanf("%c",&ch);

 switch (ch)
 {
 case 'J':
     printf("\n  january  ");
    break;
 case 'F':
     printf("\n february ");
    break;
    case 'm':
     printf("\n march");
    break;
    case 'a':
     printf("\n  april");
    break;
    case 'M':
     printf("\n may");
    break;
    case 'j':
     printf("\n  june");
    break;

    case 'K':
     printf("\n july");
    break;
    case 'A':
     printf("\n august");
    break;
    case 's':
     printf("\n september");
    break;

    case 'o':
     printf("\n  october" );
    break;
    case 'n':
     printf("\n naovember ") ;
    break;
    case 'd':
     printf("\n  december ");
    break;
 default:
    printf("\n inveli");
 }


    return 0;
}