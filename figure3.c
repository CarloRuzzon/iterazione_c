#include<stdio.h>

int main() 
{
	int a, b, c, d = 0;
	
	for (a = 10; a > 0; a--) {
		b = 0;
		while (b < a) {
			printf("*");
			b++;
		}
		
		printf("\n");
		
		c = 0;
		d++;
		while (c < d) {
			printf(" ");
			c++;
		}

	}
	
	return 0;
}
