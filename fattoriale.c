#include<stdio.h>

int main ()
{
  int a;
  int fatt = 1;
  
  for (a = 1; a <= 5; a++) {
    fatt *= a;
    printf("%d ", fatt);
  }

  printf("\n");
  return 0;
}
