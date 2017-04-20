#include<stdio.h>
int main(){
	int a, b=0, c=0;
	do{
		printf("Inserire il lato del quadrato (min 1, max 20):");
		scanf("%d", &a);
	}while(a<1 || a>20);
	while(b<a){
		c=0;
		while(c<a){
		     printf("*");
		     c++;
		}
		printf("\n");
		b++;
	}
	return 0;
}
