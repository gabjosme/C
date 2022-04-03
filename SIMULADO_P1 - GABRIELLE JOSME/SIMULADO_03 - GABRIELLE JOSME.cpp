/******************************************************************************

Fazer um programa em C que peça um valor e imprima 
uma tabela com a tabuada de 1 a 10

*******************************************************************************/
	#include <stdio.h>
	int main()
	{
		int n1;
		int x;
		int resultado;
		printf("Insira um valor:\n");
		scanf("%d",&n1);
		x=1;
		while(x<=10){
		resultado=n1*x;
		printf("%d * %d = %d \n",n1,x,resultado);
		x++;
		}
	}


