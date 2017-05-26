#include<stdio.h>

int main()
{
  int numdec, a, b, c, d;
  FILE *f= fopen("exit.txt", "r");
  fscanf(f, "%d", &numdec);
  fclose(f);
  
  b=numdec%10;
  b+=3;
  b%=10;
  
  numdec/=10;

  a=numdec%10;
  a+=3;
  a%=10;

  numdec/=10;

  d=numdec%10;
  d+=3;
  d%=10;

  numdec/=10;

  c=numdec%10;
  c+=3;
  c%=10;

  printf("%d\n%d\n%d\n%d", a, b, c, d);
  return 0;
}
