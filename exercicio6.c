#include <stdio.h>
#include <stdlib.h>

int main (void) {
		
	int peca;
	float  quantmi, quantmax, soma;
    
    
    printf ("calcular a peca \n");
    printf ("\n");

	
	printf("digite o quantidade maxima:");
	
	scanf ("%f",&quantmax);
	
	printf("digiti a quantidade minima:");
	
	scanf ("%f",&quantmi);
	
    soma =( quantmi + quantmax ) / 2;
    
    printf ("O resultado da soma e: %f \n",soma);
	
	system ("pause");
	
	return 0;
}
