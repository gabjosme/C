	#include <stdio.h>
	#include <stdlib.h>
	int main()
	{
	    int num1;
	    printf("Digite um valor correspodente para cada regi�o\n1 - Voc� � Carioca\n2 - Voc� � Paulista\n3 - Voc� � Mineiro\n4 - Voc� � Capixaba \n");
	    scanf("%d",&num1);
	    switch(num1){
	        case 1:
	            printf("\nVoc� � Carioca");
	            break;
	        case 2:
	            printf("\nVoc� � Paulista");
	            break;
	        case 3:
	            printf("Voc� � Mineiro");
	            break;
	        case 4:
	            printf("Voc� � Capixaba");
	            break;
	        default:
	            printf("\nVoc� n�o � do sudeste");
	    }
	    system ("pause");
	}
