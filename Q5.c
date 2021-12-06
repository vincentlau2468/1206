#include <stdio.h>
#include <string.h>
int main(void)
{
    char input;
    scanf("%c",&input);
    if(isupper(input)){
        printf("uppercase");
    }
    else if(islower(input)){
           printf("lowercase");
    }
    else{
           printf("special character");
    }

}
