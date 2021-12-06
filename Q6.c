#include <stdio.h>
#include <string.h>
int main(void)
{
    char input[9999];
    gets(input);
    for (int i = 0; i < strlen(input); i++)
    {
        if (isupper(input[i]))
        {
            input[i] = input[i]+32;
        }
        else if (islower(input[i]))
        {
            input[i] = input[i]- 32;
        }
    }
    puts(input);
}
