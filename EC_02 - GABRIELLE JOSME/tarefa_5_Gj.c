#include <stdio.h>

/* 5 - Crie um programa C que :
    • Gere duas matrizes 3x3 com números aleatórios entre 10 e 49.
    • Imprima as duas matrizes,
    • Imprima a matriz resultante com o valor absoluto da subtração do valor da matriz A
    menos o valor da matriz B */

int main()
{
    int a[3][3],b[3][3],c1[3][3];
    int l,c;
    int inf=10, sup=49;
    srand(time(0));
    printf("MATRIZ A:\n");
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
        a[l][c]=(rand()%(sup - inf + 1)) + inf;
        printf("%d\t",a[l][c]);
        }
        printf("\n");
    }printf("\nMATRIZ B:\n");
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
        b[l][c]=(rand()%(sup - inf + 1)) + inf;
        printf("%d\t",b[l][c]);
        }
        printf("\n");
    }printf("\nMATRIZ RESULTANTE:\n");
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
        c1[l][c]=abs(a[l][c]-b[l][c]);
        printf("%d\t",c1[l][c]);
        }
        printf("\n");
    }
    return 0;        
}