#include<stdio.h>

int main(){
  int righe, num, spazi, ast = 1, a;

  do{
    printf("Inserire la grandezza del rombo: ");
    scanf("%d", &num);
  }while(num % 2 == 0 || num>19);

  spazi = num / 2;
  num /= 2;
  for (righe = 0; righe < num + 1; righe ++) {
    for(a = 0; a < spazi; a++){
      putchar(' ');
    }

    for(a = 0; a < ast; a++){
      putchar('*');
    }
    putchar('\n');
    spazi--;
    ast+=2;
  }

  ast -=2;
  spazi++;

  for(righe = num; righe > 0; righe--){
    ast -= 2;
    spazi++;
    for(a = 0; a < spazi; a++){
      putchar(' ');
    }
    for(a = 0; a < ast; a++){
      putchar('*');
    }
    putchar('\n');
  }
return 0;
}
