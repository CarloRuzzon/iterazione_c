#include<stdio.h>
int main(){
  int max=0,a=0, b;
  printf("Inserire il numero:");
  scanf("%d", &max);
  while(a<9){
    printf("Inserire il numero:");
    scanf("%d", &b);
    if(b>max)max=b;
    a++;
  }
  printf("%d\n", max);
  return 0;
}
