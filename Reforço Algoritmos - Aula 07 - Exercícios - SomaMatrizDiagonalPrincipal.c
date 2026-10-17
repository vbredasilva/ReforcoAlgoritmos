#include <stdio.h>
#define LINHAS 3
#define COLUNAS 3

/* Funcao: soma os elementos da diagonal principal (onde L == C)
   e RETORNA o valor. Nao altera a matriz (so le). */
   
int somaDiagonalPrincipal(int M[LINHAS][COLUNAS]) 
{
    int L, C, soma = 0;
    
    for (L = 0; L < LINHAS; L++) 
	{
        for (C = 0; C < COLUNAS; C++) 
		{
            if (L == C) 				/* esta na diagonal principal */
			{              
                soma += M[L][C];       /* acumula o valor */
            }
        }
    }
    
    return soma; //Retorna o valor somado para quem chamou no programa principal
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

int main(void) {
	
	//EXEMPLO DE CARREGAMENTO DE MATRIZ DIRETO,PARA FINS DIDÁTICOS
	//SEMPRE FAÇA UM PROCEDIMENTO PARA CARREGAR;
	
    int A[LINHAS][COLUNAS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz original:\n\n");
    visualizarMatriz(A);

    printf("\nSoma da diagonal principal: %d\n", somaDiagonalPrincipal(A));

    return 0;
}
