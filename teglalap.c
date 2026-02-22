#include <stdio.h>

int main() {
	int a;
	printf("Kérem a téglalap A oldalát (cm): \n");
   	scanf("%d", &a);
   	
   	int b;
	printf("Kérem a téglalap B oldalát (cm): \n");
   	scanf("%d", &b);
   	
   	int kerulet;
   	kerulet = 2 * (a + b);
  	printf("A téglalap kerülete, 2 * (%d + %d) = %d\n", a, b, kerulet);
   	
   	int terulet;
   	terulet = a * b;
  	printf("A téglalap területe, %d * %d = %d\n", a, b, terulet);
	return 0;
	}    