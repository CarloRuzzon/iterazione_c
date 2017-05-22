#include<stdio.h>

int main(){
   int righe=1,colonne=0, i;
   while(righe<=10){
     colonne=1;
       while(colonne<=10){
           i=righe*colonne;
           printf("%d\t", i);
           colonne++;
       }
       righe++;
       printf("\n");
   }
return 0;
}
       

