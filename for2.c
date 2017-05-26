#include<stdio.h>

int main()
{
  int a, b=3;
  for (a = 0; a < 5; a++){
    printf("%d ", b);
    b += 5;
  }

  printf("\n");

  return 0;
}
