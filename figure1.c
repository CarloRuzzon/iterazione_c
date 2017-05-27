#include<stdio.h>

int main ()
{
	int a, b = 1;

	for (a = 0; a < 10; a++) {
		b=0;
		while(b < a) {
			printf("*");
			b++;
		}
		printf("\n");
	}

	return 0;
}
