#include <stdlib.h>
#include <stdio.h>

int main() {
    int nLinhas, nColunas, i, j, *pontLinhas, *pont;

    printf("Digite o numero de linhas: ");
    if (scanf("%d", &nLinhas) == 1) {
        pontLinhas = malloc(sizeof(int*)*nLinhas);
        for(i = 0; i < nLinhas; i++) {
            printf("\nInforme o numero de colunas: ");
            if (scanf("%d", &nColunas) == 1) {
                pontLinhas[i] = malloc(sizeof(int)*nColunas);
                pont = pontLinhas[i];
                printf("--------------------------------");
                printf("\nEndereco: %x \n", pont);
                printf("Valor(es): ");
                for(j = 0; j < nColunas; j++) {
                    pont[j] = rand() % 100;
                    printf("%d ",pont[j]);
                }
                printf("\n--------------------------------\n");
            } else return 1;
        }
    } else return 1;
    return 0;
}

