#include<stdio.h>

int main() 
{
	int a, b, c, d = 0;
	
	for (a = 10; a > 0; a--) {

		c = 0;
		while (c < d) {
			printf(" ");
			c++;
		}
		d++;
		
		b = 0;
		while (b < a) {
			printf("*");
			b++;
		}
		
		printf("\n");
		

	}
	
	return 0;
}
