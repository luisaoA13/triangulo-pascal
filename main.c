#include <stdio.h>

int main() {
    int i, j, linhas, e;

    printf("----Triangulo de pascal----\n");
    printf("Digite o numero de linhas (de 1 a 10) do triangulo de pascal: ");
    scanf("%d", &linhas);

    if (linhas >= 1 && linhas <= 10) {
        int triangulo[linhas][linhas];

        for(i = 0; i < linhas; i++) {
            for(j = 0; j <= i; j++) {
                if(j == 0 || j == i) {
                    triangulo[i][j] = 1;
                } else {
                    triangulo[i][j] = triangulo[i-1][j-1] + triangulo[i-1][j];
                }
            }
        }

        printf("\n");

        for (i = 0; i < linhas; i++) {
            for (e = 0; e < linhas - i - 1; e++) {
                printf("  ");
            }

            for (j = 0; j <= i; j++) {
                printf("%4d", triangulo[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("Numero Invalido!! Por favor, execute novamente e escolha de 1 a 10\n");
    }

    return 0;
}
