#include<stdio.h>

int main(){
   int righe=0,colonne=0, i;
   while(righe<10){
     righe++;
     colonne=0;
       while(colonne<10){
           colonne++;
           i=righe*colonne;
           printf("%d\t", i);
       }
       printf("\n");
   }
return 0;
}
       

