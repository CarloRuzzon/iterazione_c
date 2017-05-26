#include<stdio.h>

int main()
{
  int a, b = 20;

  for (a=0; a<6; a++){
    printf("%d ", b);
    b-=6;
  }

  printf("\n");
  return 0;
}
