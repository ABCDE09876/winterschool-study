#include <stdio.h>
#define SIZE 12

int main1213444(void)
{
  int days[SIZE]= {31,29,31,30,31,30,31,31,30,31,30,31};
  int i;
  
  for (i=0;i<SIZE;i++){
    printf("%d월은 %d일까지 있습니다.\n", i+1, days[i]);
  }
  return 0;
}