#include <stdio.h>
#define TL 2
#define TC 2

void carregarMatriz(int matriz[TL][TC])
{
    int L, C;

    for (L = 0; L < TL; L++)
    {
        for (C = 0; C < TC; C++)
        {
            printf("Digite [%d][%d]: ", L, C);
            scanf("%d", &matriz[L][C]);
        }
    }
}

void somarMatrizes(int A[TL][TC],
                  int B[TL][TC],
                  int resultado[TL][TC])
{
    int L, C;

    for (L = 0; L < TL; L++)
    {
        for (C = 0; C < TC; C++)
        {
            resultado[L][C] = A[L][C] + B[L][C];
        }
    }
}

void exibirMatriz(int matriz[TL][TC])
{
    int L, C;

    for (L = 0; L < TL; L++)
    {
        for (C = 0; C < TC; C++)
        {
            printf("%4d", matriz[L][C]);
        }

        printf("\n");
    }
}

int main()
{
    int A[TL][TC];
    int B[TL][TC];
    int resultado[TL][TC];

    printf("Carregando matriz A:\n");
    carregarMatriz(A);

    printf("\nCarregando matriz B:\n");
    carregarMatriz(B);

    somarMatrizes(A, B, resultado);

    printf("\nMatriz A:\n");
    exibirMatriz(A);

    printf("\nMatriz B:\n");
    exibirMatriz(B);

    printf("\nMatriz Resultado:\n");
    exibirMatriz(resultado);

    return 0;
}

