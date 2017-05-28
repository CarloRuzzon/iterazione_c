#include<stdio.h>

int main ()
{
	int a, b;

	for (a = 1; a <= 10; a++) {
		for (b = 0; b < a; b++) {
			putchar('*');
		}
		putchar('\n');
	}

	return 0;
}
