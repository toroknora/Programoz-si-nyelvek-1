#include <math.h>
#include <stdio.h>

int main() {

	float r;
	printf("Kérem a kör sugarát (cm): \n");
   	scanf("%f", &r);
   	
   	float pi = M_PI;
   	
   	float kerulet;
   	kerulet = 2 * r * pi;
  	printf("A kör kerülete, 2 * %f * %f = %f\n", r, pi, kerulet);
   	
   	float terulet;
   	terulet = r * r * pi;
  	printf("A kör területe, %f * %f * %f = %f\n", r, r, pi, terulet);
	
	return 0;
	}    