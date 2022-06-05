#include <stdio.h>
#include <math.h>
/* 2- Dado um vetor com 20 números aleatório entre 1 e 5
    a) Imprima o vetor origem
    b) gere um vetor resultante da soma de posições adjacentes cuja os dois valores sejam ímpares,
    imprimindo as posições, os valores e o somatório
    c) imprima o valor de cada posição do vetor resultante em conjunto com o valor elevado ao valor do
    índice anterior, em sendo o primeiro do vetor, utilizar o próprio. */
int main()
{
    int v[20], soma[10];
    int a=0, b=0, posicao;
    int inf=1, sup=5;
    srand(time(0));
    printf("VETOR ORIGEM:\n");
    for(a=0;a<20;a++){
        v[a]=(rand()%(sup - inf + 1)) + inf;
        printf("%d, ",v[a]);
        
    }printf("\nVALORES ADJACENTES:");
    for(a=0;a<20;a++){
        if(v[a]%2!=0 && v[a+1]%2!=0){
        printf("\nposição [%d e %d] valores [%d e %d] somatório [%d]",a+1,a+2,v[a],v[a+1],v[a]+v[a+1]);
        soma[posicao]=v[a]+v[a+1];
        posicao++;
        }
    }printf("\nVETOR RESULTANTES:");
    for(a=0;a<posicao;a++){
        if(a == 0){
            printf("\nNa posição [%d] temos a soma [%d], que elevado a [%d] terá valor [%0.0f]",a,soma[a],soma[a],pow(soma[a],soma[a]));  
            }else{
            printf("\nNa posição [%d] temos a soma [%d], que elevado a [%d] terá valor [%0.0f]",a,soma[a],soma[a-1],pow(soma[a],soma[a-1]));
            }
        }
    return 0;    
}
