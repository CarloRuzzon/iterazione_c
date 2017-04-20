#include<stdio.h>
int main(){
  int a, b=0, c=0, d=0;
  do{
    printf("Inserire il lato del quadrato(min 1 max 20):");
    scanf("%d", &a);
  }while(a<1 || a>20);
  while(b<a){
    printf("*");
    b++;
  }
  printf("\n");
  while(c<a-2){
    printf("*");
    c++;
    d=0;
    while(d<a-2){
      printf(" ");
      d++;
    }
    printf("*\n");
  }
  b=0;
  while(b<a){
    printf("*");
    b++;
  }
  return 0;
}

