	#include <stdio.h>
	#include <stdlib.h>
	int main()
	{
	int num1=0;
	int num2=0;
	int dif;
	int x=0;
	
	printf("Digite dois números inteiros\n");
	scanf("%d %d",&num1,&num2);	
	
	if(num1==num2){
		printf("Os números são iguais");
	}
	else if  (num1 > num2){
		dif = num1 - num2;
		x = num1;
		printf("O maior é %d\n",num1);
		printf("Diferença entre eles é %d",dif);
		printf("\n O reverso dos impares é ");
		while(num2<x){
			if (x%2!=0){
				printf(" %d",x);
			}
		x--;	
		}
	}
	else {
		dif = num2 - num1;
		x = num2;
		printf("O maior é %d\n",num2);
		printf("Diferença entre eles é %d",dif);
		printf("\n O reverso é ");
		while(num1<x){
			if (x%2!=0){
				printf(" %d",x);
			}
		x--;
	}
	}
	system ("pause");
	}
