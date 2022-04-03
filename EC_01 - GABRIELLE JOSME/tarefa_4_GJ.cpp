	#include <stdio.h>
	#include <stdlib.h>
	int main()
	{
		int n_idade=0;
		int n_pessoas=0,soma_id=0;
		float med;
		int idade_maior=0,idade_menor=150;
		do{printf("Qual sua idade?\n");
		scanf("%d",&n_idade);
		n_pessoas++;
		soma_id=soma_id+n_idade;
		if(n_idade>idade_maior && n_idade!=0){
			idade_maior=n_idade;
		}
		if(n_idade<idade_menor && n_idade!=0){
			idade_menor=n_idade;
		}if(n_idade==0){
		    n_pessoas--;
		}
		}while(n_idade!=0);
			printf("\nO número de pessoas é %d",n_pessoas);
			med=(float)soma_id/(float)n_pessoas;
			printf("\nA média é %.2f",med);
			printf("\nA menor idade é %d e a maior %d",idade_menor,idade_maior);
			system ("pause");
	}
