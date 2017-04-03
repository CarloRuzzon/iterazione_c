#include<stdio.h>

int main(){
  int num;
  printf("Inserire il numero:");
  scanf("%d", &num);
  while(num>0){
    printf("%d\n", num);
    num--;
  }
  printf("LANCIATOOOOO!!!!\n");
  return 0;}

