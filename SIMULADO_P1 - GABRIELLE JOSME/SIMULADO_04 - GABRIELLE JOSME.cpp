/******************************************************************************
Pe�a n�meros ao usu�rio at� que a soma de todos os n�meros digitados 
seja pelo menos 20. Informe o subtotal e no final o total geral.
*******************************************************************************/
	#include <stdio.h>
	#include <stdlib.h>
	int main()
	{
		int n1;
		int tot_n1=0;
		do{
		printf("\nDigite um n�mero:\n");
		scanf("%d",&n1);
		tot_n1=tot_n1+n1;
		printf("O subtotal � %d",tot_n1);
		}while(tot_n1<=20);
		printf("\nO total � %d",tot_n1);
		system ("pause");
	}


		
		
		

