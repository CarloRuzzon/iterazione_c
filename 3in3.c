#include<stdio.h>

int main(){
  int a=0, b;
  printf("Inserire il numero di partenza:");
  scanf("%d", &b);
  while(a<5){
    printf("%d\n", b);
    b=b+3;
    a++;
  }
 return 0; }
  
