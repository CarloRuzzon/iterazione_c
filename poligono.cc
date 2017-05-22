#include<iostream>
#include<math.h>
#define p, a
using namespace std;
float acq(float& x, float& y){
  cout<<"Inserire la base e l'altezza(o l'apotema):";
  cin>>x,y;
}
float triangolo(float x, float y){
  a=x*y/2;
  p=x*3;
  cout<<"L'area e' "<<a<< " e il perimetro e' "<<p<<endl;
}
float quadrato(float x){
  a=x*x;
  p=x*4;
  cout<<"Il perimetro e': "<<p<< " e l'area e' "<<a<<endl;
}
float pentagono(float x, float y){
  float sp;
  p=x*5;
  sp=p/2;
  a=sp*y/2;
  cout<<"Il perimetro e' "<<p<< " e l'area e' "<<a<<endl;
}
float esagono(float x, float y){
  a=3*y*x;
  p=x*6;
  cout<<"L'area e' "<<a<< " il perimetro e' " <<p<<endl;
}
float ettagono (float x, float y){
  p=x*7;
  a=y*pow(x,2);
  cout<<"Il perimetro e' "<<p<< " l'area e' "<<a<<endl;
}
float ottagono(float x, float y){
  p=x*8;
  a=p*y/2;
  cout<<"Il perimetro e' "<<p<< " l'are e' "<<a<<endl;
}
float ennagono (float x, float y){
  p=x*9;
  a=p*y/2;
  cou<<"Il perimetro e' "<<p<< " e l'area e' "<<a<<endl;
}
float decagono (float x, float y){
  p=x*10;
  a=p*y/2;
  cout<<"Il perimetro e' "<<p<< " e l'area e' "<<a<<endl;
}                                                     
int main(){
  float a, b, c;
  cout<<"1)triangolo\n2)quadrato\n3)pentagono\n4)esagono\n5)ettagono\n6)ennagono\n7)decagono\n8)ettagono";
  cin>>a;
  switch(a){
    case 1:
      acq(b,c);
      triangolo(b,c); 
      break;
    case 2:
      cout<<"Inserire il lato:";
      cin>>b;
      quadrato(b);
      break;
    case 3:
      acq(b,c);
      quadrato(b,c);
      break;
    case 4:
      acq(b,c);
      esagono(b,c);
      break;
    case 5:
      acq(b,c);
      ettagono(b,c);
      break;
    case 6:
      acq(b,c);
      ottagono(b,c);
      break;
    case 7:
      acq(b,c);
      ennagono(b,c);
      break;
    case 8:
      acq(b,c);
      decagono(b,c);
      break;
    default:
      cout<<"Inserire un numero corretto"<<endl;
      break;
    }
  return 0;}
