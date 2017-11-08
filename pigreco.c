#include<stdio.h>

int main ()
{
  float pi = 4., b = 3.;
  int num, a, segno = 1;
  
  do {
    printf("Quanta precisione vuoi avere? ");
    scanf("%d", &num);
  } while (num < 2);

  pi = 4 - 4/b;

  for(a = 1; a < num - 1; a++){
	  b+=2;
	  pi = (pi + 4/b * segno);
	  segno *= -1;

  }

  printf("%f", pi);



  
  return 0;
}
