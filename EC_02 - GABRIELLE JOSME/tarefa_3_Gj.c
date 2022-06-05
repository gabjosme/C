#include <stdio.h>
#include <string.h>

/*  3 - Escreva um programa que lê um número de PIS/PASEP e mostra o dígito verificador correspondente.
    O dígito verificador do PIS/PASEP é calculado através da seguinte regra:
    • o número é composto por dez dígitos mais um dígito verificador.
    • Multiplique os números, da esquerda para a direita, respectivamente por 3 2 9 8 7 6 5 4 3 2.
    • Some os resultados das multiplicações;
    • calcule o resto da divisão da soma por 11 e subtraia o resultado de 11.
    • Se o resultado for 10 o dígito é zero, caso contrário o dígito é o próprio resultado.
    Por exemplo, para o número 1701209041, o cálculo seria:
    1x3 + 7x2 + 0x9 + 1x8 + 2x7 + 0x6 + 9x5 + 0x4 + 4x3 + 1x2 = 98. O resto da divisão de 98 por 11 é
    10. Como 11 - 10 = 1, o dígito é 1.
    Logo, teríamos a seguinte saída:
    Para o número 1701209041 teremos como DV o valor 1*/

int main()
{
    int num[10]={0}, num_multi[10]={3,2,9,8,7,6,5,4,3,2};
    int tam=0, n=0, multi=0, tot_multi, rest, dv=0;
    for(n=0;n<10;n++){
        do{
            printf("Digite o %dº número do PIS/PASEP: ",n+1);
            scanf("%d",&num[n]);
            multi=(num_multi[n] * num[n]);
            tot_multi+=multi;
            //printf(" %d . %d = %d ",num_multi[n],num[n],multi);
        }while(num[n]<0 || num[n]>9);
    }printf("\n---------------------------------------");
    printf("\nO número do PIS/PASEP é ");
    for(n=0;n<10;n++){
        printf("%d",num[n]);
    }
    //printf("\ntotal multi %d",tot_multi);
    rest=(tot_multi%11);
    rest=11-rest;
    if(rest == 10){
            dv=0;
            printf(" seu dv é [%d]",dv);
        }else{
            dv=rest;
            printf(" seu dv é [%d]",dv);
    }
    return 0;
}
