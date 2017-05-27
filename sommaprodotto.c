#include<stdio.h>

int main()
{
  int a = 0, somma = 0, prodotto = 1;

  /*due cicli for er i calcoli, il primo per i numeri pari, il secondo per i dispari*/
  for (a = 2; a <= 30; a += 2) {
    somma += a;
  }

  for (a = 1; a <= 15; a += 2) {
   prodotto *= a;
  }

  /*stampaggio*/
  printf("La somma dei numeri pari e': %d e il prodotto dei dispari e': %d",somma, prodotto);

  return 0;
}
