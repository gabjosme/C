#include <stdio.h>
#include <string.h>
#include <math.h>
/*1 - Leia 5 palavras. Se alguma das 5 for “VIDA”, concatene todas 
as palavras e informe a quantidade de caracteres da string concatenada*/

int main()
{
    char nome[5][30], concat[1][30];
    int n=0,tam=0,nome2,soma=0;
    for(n=0;n<5;n++){
        printf("Digite uma palavra:");
        gets(nome[n]);
    }for(n=0;n<5;n++){
        if(strcmp(nome[n],"vida")==0 || strcmp(nome[n],"VIDA")==0 || strcmp(nome[n],"Vida")==0){
        printf("\n");
        printf("A palavra concatenada é :");
        for(n=0;n<5;n++){
            strcat(concat[0],nome[n]);
            tam=strlen(concat[0]);
        }
            soma+=tam;
            printf("%s",concat[0]);
            printf("\nAs palavras concatenada tem '%d' caracteres",soma);
        }
    }
    return 0;
} 

