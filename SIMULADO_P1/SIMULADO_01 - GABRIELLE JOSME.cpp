/******************************************************************************
Fa�a um programa em "C" que l� dois valores e imprime:
� se o primeiro valor for menor que o segundo, a lista de valores do primeiro at� o segundo;
� se o primeiro valor for maior que o segundo a lista de valores do primeiro at� o segundo em ordem
decrescente;
� se ambos forem iguais a mensagem "valores iguais�
*******************************************************************************/
#include <stdio.h>
int main()
{
	int n1,n2;
	int x;
	printf("Insira dois n�meros:\n");
	scanf("%d %d",&n1,&n2);
	if (n1==n2){
		printf("Os n�meros s�o iguais");
	}else if(n1>n2){
		x=n1;
		printf("O maior n�mero � o %d",n1);
		printf("\nA sequ�ncia decrescente �");
		while(x>n2){
		printf("  %d  ",x);
		x--;
	}
	}else{
		x=n2;
		printf("O maior n�mero � o %d",n2);
		printf("\nA sequ�ncia crescente �");
		while(x>n1){
		printf("  %d  ",n1);
		n1++;
	}
}
	
}

