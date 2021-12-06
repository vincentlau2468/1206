#include <string.h>
#include <stdio.h>

int main()
{
    char input[9999];;
    char *changed;
    int eat;
    char pic;
    scanf("%s",input);
    scanf("%d",&eat);
    scanf("%c", &pic);
    changed = strtok(input, &pic);
    while (changed != NULL){
        printf("%s\n",changed);
        changed = strtok(NULL, &pic);
    }
}
