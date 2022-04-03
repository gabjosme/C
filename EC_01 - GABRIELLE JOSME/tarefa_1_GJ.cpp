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
