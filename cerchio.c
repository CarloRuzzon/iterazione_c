#include<stdio.h>
int main(){
  double c, s;
  int r;
 do{
    printf("Inserire il raggio:");
    scanf("%d", &r);
  }while(r<0);
  c=2.0*r*3.14;
  s=r*r*3.14;
  printf("La circonferenza e' %.2f, e la superficie e' %.2f\n", c, s);
  return 0;
}
