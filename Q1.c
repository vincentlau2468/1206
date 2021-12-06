#include <stdio.h>
int main(void)
{
  int input;
  int num=0;
  int save[999];
  int p = 1;
  scanf("%d", &input);
  for (int i = 2; i <= input; i++)
  {
    p = 1;

    for (int j = 2; j < i; j++)
    {
      if (i % j == 0)
      {
        p = 0;
        break;
      }
    }
    if (p == 1)
    {
      save[num]=i;
      num++;
    }
  }
  for(int i=0;i<num;i++){
    for(int j=0;j<num;j++){
      if(save[i]+save[j]==input&&save[i]<=save[j]){
        printf("%d+%d\n",save[i],save[j]);
      }
    }
  }
}
