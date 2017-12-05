#include<stdio.h>

int main(){
  int i = 0;
  char v[]="Ciao";
    while(v[i] != '\0')
  {
    printf("%c\n", v[i]);
    i++;
  }
  return 0; 
}

