#include <stdio.h>
#include <string.h>
int main(void)
{
  int maxlength = 0;
  int arrlength = 0;
  char sentence[100][100];
  while (gets(sentence[arrlength]))
  {
    if (strlen(sentence[arrlength]) > maxlength)
    {
      maxlength = strlen(sentence[arrlength]);
    }
    arrlength++;
  }
  for (int i = 0; i < maxlength; i++)
  {
    for (int j = arrlength - 1; j >= 0; j--)
    {
      if (sentence[j][i])
      {
        printf("%c", sentence[j][i]);
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
}
