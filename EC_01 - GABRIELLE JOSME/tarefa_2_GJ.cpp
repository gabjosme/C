	#include <stdio.h>
	#include <stdlib.h>
	int main()
	{
	int num1=0;
	int num2=0;
	int dif;
	int x=0;
	
	printf("Digite dois n�meros inteiros\n");
	scanf("%d %d",&num1,&num2);	
	
	if(num1==num2){
		printf("Os n�meros s�o iguais");
	}
	else if  (num1 > num2){
		dif = num1 - num2;
		x = num1;
		printf("O maior � %d\n",num1);
		printf("Diferen�a entre eles � %d",dif);
		printf("\n O reverso dos impares � ");
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
		printf("O maior � %d\n",num2);
		printf("Diferen�a entre eles � %d",dif);
		printf("\n O reverso � ");
		while(num1<x){
			if (x%2!=0){
				printf(" %d",x);
			}
		x--;
	}
	}
	system ("pause");
	}
