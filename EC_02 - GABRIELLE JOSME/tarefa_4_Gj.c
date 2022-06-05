#include <stdio.h>

/*4 - Crie um programa que receba uma letra e indique a quantidade de vezes que a mesma se repete neste
poema de William Shakespeare abaixo*/

int main()
{   
    char letra, letra_maiuscula;
    char poema[3000]="De almas sinceras a uniao sincera Nada ha que impeca: amor nao e amor Se quando encontra obstaculos se altera, Ou se vacila ao minimo temor. Amor e um marco eterno, dominante, Que encara a tempestade com bravura; e astro que norteia a vela errante, Cujo valor se ignora, la na altura. Amor nao teme o tempo, muito embora Seu alfange nao poupe a mocidade; Amor nao se transforma de hora em hora, Antes se afirma para a eternidade. Se isso e falso, e que e falso alguem provou, Eu nao sou poeta, e ninguem nunca amou.";
    int n,soma=0;
    printf("SEGUE ABAIXO O POEMA DO William Shakespeare : \n\n");
    printf("'De almas sinceras a uniao sincera\nNada ha que impeca: amor nao e amor\nSe quando encontra obstaculos se altera,\nOu se vacila ao minimo temor.\nAmor e um marco eterno, dominante,\nQue encara a tempestade com bravura;\ne astro que norteia a vela errante,\nCujo valor se ignora, la na altura.\nAmor nao teme o tempo, muito embora\nSeu alfange nao poupe a mocidade;\nAmor nao se transforma de hora em hora,\nAntes se afirma para a eternidade.\nSe isso e falso, e que e falso alguem provou,\nEu nao sou poeta, e ninguem nunca amou.'");
    printf("\n\n---------------------------\nQual Letra do poema você deseja buscar? ");
    scanf("%c",&letra);
    letra_maiuscula=toupper(letra);
    for(n=0;poema[n];n++){
        if(poema[n]==letra || poema[n]==letra_maiuscula){
        soma++;       
        }
    }
    printf("A letra '%c' aparece %d vezes",letra,soma);
    return 0;
}


