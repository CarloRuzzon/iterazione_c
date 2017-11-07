#include<stdio.h>

int main ()
{
  float pi = 4., b = 3.;
  int num, a;
  
  do {
    printf("Quanta precisione vuoi avere? ");
    scanf("%d", &num);
  } while (num < 1);

  for(a = 1; a < num; a++){
	if(num>1){
	  pi = pi - 4. / b;
	  num--;
	  b+=2;
	}
	if(num > 1){
	  pi = pi + 4. / b;
	  num--;
	  b+=2;
	}
  }

  printf("%f", pi);



  
  return 0;
}
