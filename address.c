#include<stdio.h>

int main(){
	int v[10], i;
	int *a;


	for(i = 0; i < 10; i++){
		a = &(v[i]);
		printf("%p\n", a);
	}
	return 0;
}
