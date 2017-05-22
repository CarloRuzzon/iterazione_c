#include<stdio.h>
int main(){
  int num, a, c=0;
  do{
    printf("Inserire il numero:");
    scanf("%d", &num);
  }while(num<0);
  while(num>0){
    a=num%10;
    if(a==7){
      c++;
    }
    num/=10;
  }
  printf("Il 7 e' ripetuto %d volte\n", c);
  return 0;
}
