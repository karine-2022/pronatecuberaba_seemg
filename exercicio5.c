#include <stdio.h>
#include <stdlib.h>

int main (void) {
		
	int codigo;
	float  quantidadep, valorp, soma;
    
    
    printf ("calcular valor total da peca \n");
    printf ("\n");

	
	printf("digite o valor da peca:");
	
	scanf ("%f",&valorp);
	
	printf("digiti a quantidade de peca:");
	
	scanf ("%f",&quantidadep);
	
    soma = quantidadep * valorp;
    
    printf ("O resultado da soma e: %f \n",soma);
	
	system ("pause");
	
	return 0;
}
