#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


 int main (void){
 
  	setlocale(LC_ALL,"Portuguese");
  
  	int vescolha;   
  	
  	float primeiro, segundo, operacao;
  	
  	char opcao ='s';  
  	
  	while (opcao =='s'){	  
	  
  	
	  	printf ("digite a a op��o que voc� deseja \n");
	  	printf ("\n");     
	  	printf("digite (1) para ADI��O \n");
	  	printf("digite (2) para SUBTRA��O \n");
	  	printf("digite (3) para MULTIPLICA��O");
	  	printf("\n");
	  	printf("digite (4) para DIVIS�O");
	  	printf( "\n");
	  	printf("digite (0) para SAIR");
	  	printf("\n");
	  	printf("qual op��o voc� deseja : ");
	  	scanf( "%d",&vescolha);
	  	
	  	if(vescolha == 1)
	  	{
	  		
	  		printf("escolha o primeiro numero : ");
	  		scanf("%f", &primeiro);
	  		
	  		printf("escolha o segundo numero : ");
	  		scanf("%f", &segundo);
			operacao= primeiro+segundo;
			printf("resultado da soma � %.2f \n", operacao);
				
		}
	  	else if ( vescolha == 2)
	  	{
	  		printf("escolha o primeiro numero : ");
	  		scanf("%f", &primeiro);
	  		
	  		printf("escolha o segundo numero : ");
	  		scanf("%f", &segundo);
			operacao= primeiro-segundo;
			printf("resultado da soma � %.2f \n", operacao);
					
		}
		
		else if ( vescolha == 3)
	  	{
	  		printf("escolha o primeiro numero : ");
	  		scanf("%f", &primeiro);
	  		
	  		printf("escolha o segundo numero : ");
	  		scanf("%f", &segundo);
			operacao= primeiro*segundo;
			printf("resultado da soma � %.2f \n", operacao);  		
	  		
		}
		
		else if ( vescolha == 4)
	  	{
	  		printf("escolha o primeiro numero : ");
	  		scanf("%f", &primeiro);
	  		
	  		printf("escolha o segundo numero : ");
	  		scanf("%f", &segundo);
	  		
	  		while (segundo<= 0){
			  
				printf("digite um numero maior que 0 : ");
	  			scanf("%f", &segundo);  
			  
	  		
	        }
	  		
			operacao= primeiro/segundo;
			printf("resultado da soma � %.2f \n", operacao);		
	  		
		}
	  	
	  	
	  	else if ( vescolha == 0)
	  	{
	  		exit(0);
			   	
		}
	  	
		else  
		{
		    printf("Digite um n�mero 0 a 4 \n\n");
	
		}  
  	    
  		printf(" deseja continuar : s/n : "  );
  		scanf(" %c",&opcao);  		
  		if (opcao=='s')
  		system("cls");
  		else  
  		exit(0);
  	
	}
	
  	system("pause");
  	
  	return 0;
  	
}
  		
	     
  	
 
   
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 



