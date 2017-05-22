#include<stdio.h>
int main(){
  int max,c, maxx, a=0, t;  
  printf("Inserire i numeri:");
  scanf("%d", &max);
  printf("Inserire i numeri:");
  scanf("%d", &maxx);
  if(maxx>max){
    t=maxx;
    maxx=max;
    max=t;
  }
  while(a<8){
    printf("Inserire i numeri:");
    scanf("%d", &c);
    if(c>=max){
      maxx=max;
      max=c;
    }
    else if(c>=maxx){
      maxx=c;
    }
    a++;
  }
    printf("I numeri maggiori %d e %d\n", max, maxx);
  return 0;
}
