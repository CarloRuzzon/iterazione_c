#include<stdio.h>
int main(){
  int max,c, maxx, a=0, b, d;  
  printf("Inserire i numeri:");
  scanf("%d", &b);
  printf("Inserire i numeri:");
  scanf("%d", &d);
  while(a<8){
    printf("Inserire i numeri:");
    scanf("%d", &c);
    if(c>max){
      if(c>maxx){
        maxx=c;
      }
      max=maxx;
    }
    a++;
  }
    printf("I numeri maggiori %d e %d", max, maxx);
  return 0;
}
