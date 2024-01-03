//2. Wap to perform string library functions.


#include<stdio.h>
#include<string.h>
int main(){
     char str[20],str2[20];
     printf("enetr name:");
     gets(str);
     printf("name is:");
     puts(str);

     printf("enetr name 2:");
     gets(str2);

    
     printf("\n upper of string is %s",strupr(str));
     printf("\n length of string is %d",strlen(str));
     printf("\n lower of string is %s",strlwr(str));

     printf("\n after value of strcmp(): %d",strcmp(str,str2));
      
     strcat(str,"patel");
     printf("\n after marge string is %s",str);

     strcpy(str,"jp");
     printf("\n after copy name is %s",str);

     printf("\n reverse of string is %s",strrev(str));



    return 0;
}

