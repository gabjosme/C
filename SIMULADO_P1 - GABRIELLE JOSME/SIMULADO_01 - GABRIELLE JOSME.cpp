/******************************************************************************
Faça um programa em "C" que lê dois valores e imprime:
• se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
• se o primeiro valor for maior que o segundo a lista de valores do primeiro até o segundo em ordem
decrescente;
• se ambos forem iguais a mensagem "valores iguais”
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n1,n2;
	int x;
	printf("Insira dois números:\n");
	scanf("%d %d",&n1,&n2);
	if (n1==n2){
		printf("Os números são iguais");
	}else if(n1>n2){
		x=n1;
		printf("O maior número é o %d",n1);
		printf("\nA sequência decrescente é");
		while(x>n2){
		printf("  %d  ",x);
		x--;
	}
	}else{
		x=n2;
		printf("O maior número é o %d",n2);
		printf("\nA sequência crescente é");
		while(x>n1){
		printf("  %d  ",n1);
		n1++;
	}
}
	system ("pause");
}

