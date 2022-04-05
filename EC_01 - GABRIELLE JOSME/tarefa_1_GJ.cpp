	/*
	Crie uma aplicação, utilizando o comando switch, que leia um valor inteiro, e apresente a seguinte
	frase, conforme tabela abaixo:
	1 - Você é Carioca
	2 - Você é Paulista
	3 - Você é Mineiro
	4 - Você é Capixaba
	Diferente dos acima - Você não é do sudeste
	*/
	#include <stdio.h>
	#include <stdlib.h>
	int main()
	{
	    int num1;
	    printf("Digite um valor correspodente para cada região\n1 - Você é Carioca\n2 - Você é Paulista\n3 - Você é Mineiro\n4 - Você é Capixaba \n");
	    scanf("%d",&num1);
	    switch(num1){
	        case 1:
	            printf("\nVocê é Carioca");
	            break;
	        case 2:
	            printf("\nVocê é Paulista");
	            break;
	        case 3:
	            printf("Você é Mineiro");
	            break;
	        case 4:
	            printf("Você é Capixaba");
	            break;
	        default:
	            printf("\nVocê não é do sudeste");
	    }
	    system ("pause");
	}
