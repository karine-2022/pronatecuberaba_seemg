#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num1, num2, multiplicacao;
    
    
    printf ("Digite o primeiro numero :");
    
	scanf ("%d",&num1);
	
	printf("Digite o segundo numero:");
	
	scanf ("%d",&num2);
	
    multiplicacao = num1 *num2;
    
    printf ("O resultado da multiplicacao e: %d \n",multiplicacao);
	
	system ("pause");
	
	return 0;
}
