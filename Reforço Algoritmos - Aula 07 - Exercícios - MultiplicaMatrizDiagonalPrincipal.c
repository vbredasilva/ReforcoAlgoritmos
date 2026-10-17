#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

void dobrarDiagonal(int M[LINHAS][COLUNAS]) 
{
    int L, C;
    
    for (L = 0; L < LINHAS; L++) 
	{
        for (C = 0; C < COLUNAS; C++) 
		{
            if (L == C) /* esta na diagonal principal */
			{                 
                M[L][C] = M[L][C] * 2;    /* le, multiplica e grava de volta */
            }
        }
    }
}

void visualizarMatriz(int M[LINHAS][COLUNAS]) 
{
    int L, C;
    
    for (L = 0; L < LINHAS; L++) 
	{
        for (C = 0; C < COLUNAS; C++) 
		{
            printf("%d\t", M[L][C]);
        }
        printf("\n");
    }
}

int main(void) 
{
    int M[LINHAS][COLUNAS] = 
	{
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz original:\n\n");
    visualizarMatriz(M);

    dobrarDiagonal(M); /* altera a matriz M por referencia */

    printf("\nApos dobrar a diagonal principal:\n\n");
    visualizarMatriz(M);

    return 0;
}
