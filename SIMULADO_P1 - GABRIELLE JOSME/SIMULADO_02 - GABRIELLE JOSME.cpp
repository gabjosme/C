/******************************************************************************
Fazer um programa que lê um operador (+,-,*,/) e dois valores
inteiros e imprime o resultado da expressão:
<valor 1> <operador> <valor 2> = <total>
*******************************************************************************/
	#include <stdio.h>
	int main()
	{
		float n1,n2;
		char operador;
		float tot;
		printf("Insira um operador:\n");
		scanf("%c",&operador);
		printf("Insira dois valores:\n");
		scanf("%f %f",&n1,&n2);
		switch (operador){
			case '+':
			tot=n1+n2;
			printf("%0.2f  %c  %0.2f = %0.2f",n1,operador,n2,tot);
			break;
			case '-':
			tot=n1-n2;
			printf("%0.2f  %c  %0.2f = %0.2f",n1,operador,n2,tot);
			break;
			case '*':
			tot=n1*n2;
			printf("%0.2f  %c  %0.2f = %0.2f",n1,operador,n2,tot);
			break;
			case '/':
			tot=n1/n2;
			printf("%0.2f  %c  %0.2f = %0.2f",n1,operador,n2,tot);
			break;
		}
	}

