#include<stdio.h>

int main () 
{
	int a, b, c = 0, d = 0;

	for (a = 10; a > 0; a--) {
		b = 0;
		while (b < a) {
			printf(" ");
			b++;
		}

		d++;
		c = 0;
		while (c < d) {
			printf("*");
			c++;
		}
		printf("\n");
	}
	return 0;
}


