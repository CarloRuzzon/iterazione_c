#include<stdio.h>
int main(){
  int max=0,a=0, b;
  while(a<10){
    a++;
    printf("Inserire il %d numero:", a);
    scanf("%d", &b);
    if(max<b)max=b;
  }
  printf("%d\n", max);
  return 0;
}
