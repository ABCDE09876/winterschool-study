#include <stdio.h>

int main(void)
{
  int munja;

  while(1)
    {
      if ((munja=getchar())!=EOF)
        purchar(munja);
      else
        break;
    }
  return 0;
}