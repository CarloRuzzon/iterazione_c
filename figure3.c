#include<stdio.h>

int main() 
{
	int a, b, c, d = 0;
	
	for (a = 10; a > 0; a--) {

		for (c = 0; c < d; c++) {
			putchar(' ');
		}
		d++;
		
      for (b = 0; b < a; b++) {
			putchar('*');
		}
		
		putchar('\n');
		

	}
	
	return 0;
}
