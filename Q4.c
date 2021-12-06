#include <stdio.h>
#include <string.h>
int main(void)
{
    char input[9999];
    char change;
    char ans; 
    gets(input);
    scanf(" %c", &change);
    scanf(" %c", &ans);

    for (int i = 0; i < strlen(input); i++)
    {
        if (change == input[i])
        {
            input[i] = ans;
        }   
    }puts(input);
}
