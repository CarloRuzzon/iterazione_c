#include<stdio.h>
#include<stdlib.h>
int main(){
  int numb, numbu, numd=0, app, a=1, m=1;
  do{
    printf("Inserire il numero in binario:");
    scanf("%d", &numb);
    numbu=numb;
    while(numbu>0){
      app = numbu % 10;
      numbu /= 10;
      if(app!=0 && app!=1){
        a=0;
        break;
      }
    }
    numbu=numb;
  }while(a==0);
  while(numbu>0){
    app=numbu%10;
    numbu/=10;
    numd=numd+app*m;
    m*=2;
  }
    printf("Il numero in binario e' %d, il numero in decimale e' %d\n", numb, numd);
  return 0; 
}
