#include<stdio.h>

int main() {
	int a, b = 0;
	
	for (a = 10; a > 0; a--) {
		b = 0;
		while (b < a) {
			printf("*");
			b++;
		}
		printf("\n");
	}
	return 0;
}
