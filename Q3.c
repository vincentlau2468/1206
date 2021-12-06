#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
   char input[9999];
   gets(input);
   for(int i=0;input[i]!='\0';i++){
       if(isupper(input[i])){
           input[i]=tolower(input[i]);
           
       }
   }puts(input);
}
