#include<stdio.h>

int main(){
  int a, p1, p2, p3, p4;
  do{
    printf("Inserire il numero:");
    scanf("%d",&a);
  }while(a<10000 || a>=100000);
  p4=a%10;
  p3=a/10%10;
  p2=a/1000%10;
  p1=a/10000;
  if(p1==p4 && p2==p3){
    printf("E' palindromo!\n");
  }
  else{
    printf("Non e' un palindromo!\n");
  }
  return 0;
}
