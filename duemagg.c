#include<stdio.h>
int main(){
  int max=-9999,c, maxx=-9999, a=0;  
  while(a<10){
    a++;
    printf("Inserire il %d numero:", a);
    scanf("%d", &c);
    if(c==max || c==maxx);
    else if(c>max){
      maxx=max;
      max=c;
    }
    else if(c>maxx)maxx=c;
    }
    printf("I numeri maggiori %d e %d", max, maxx);
  return 0;
}
