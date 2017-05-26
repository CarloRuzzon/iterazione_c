#include<stdio.h>

int main()
{
  int a, b = 19;

  for(a=0; a<5; a++){
    printf("%d ", b);
    b+=8;
  }

  printf("\n");
  return 0;
}
