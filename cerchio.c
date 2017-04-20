#include<stdio.h>
int main(){
  float r, c, s;
 do{
    printf("Inserire il raggio:");
    scanf("%f", &r);
  }while(r<1);
  c=2*r*3.14;
  s=r*r*3.14;
  printf("La circonferenza e' %.2f, e la superficie e' %.2f\n", c, s);
  return 0;
}
