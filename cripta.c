#include<stdio.h>

int main()
{
  int num, a, b, c, d;

  do {
    printf("Inserire un numero (di quattro cifre):");
    scanf("%d", &num);
  } while ( num < 1000 || num > 9999 );
  
  d=num%10;
  d=(d+7)%10;
  
  num/=10;
  
  c=num%10;
  c=(c+7)%10;
  
  num/=10;
  
  b=num%10;
  b=(b+7)%10;
  
  num/=10;
  
  a=num%10;
  a=(a+7)%10;
  
  printf("%d%d%d%d\n", c, d, a, b);

  FILE *f = fopen("exit.txt", "w");
  fprintf(f, "%d%d%d%d\n", c, d, a, b);
  fclose(f);

  return 0;
}
