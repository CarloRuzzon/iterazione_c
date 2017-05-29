#include<stdio.h>

int main ()
{
  float pi, b = 3;
  int a, i;
  
  do {
    printf("Quanta precisione vuoi avere? ");
    scanf("%d", &a);
  } while (a < 1);

  pi = 4 - 4 / b;
  
  for (i = 1; i < a - 1; i++) {
    b += 2;
    pi += 4 / b;
    b += 2;
    pi -= 4/b;
  }

  printf("%f", pi);
  return 0;
}
