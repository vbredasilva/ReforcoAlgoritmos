#include <stdio.h>
#define TF 5

void carregarVetor(int vetor[]) 
{
    int i;

    for (i = 0; i < TF; i++) 
	{
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
}

void exibirVetor(int vetor[]) 
{
    int i;

    for (i = 0; i < TF; i++) 
	{
        printf("%d ", vetor[i]);
    }

    printf("\n");
}

void inverterVetor(int vetor[]) 
{
    int i;
    int aux;

    for (i = 0; i < TF / 2; i++) 
	{
        aux = vetor[i];
        vetor[i] = vetor[TF - 1 - i];
        vetor[TF - 1 - i] = aux;
    }
}

void inverterVetorOtimizado(int vetorOrig[], int vetInv[])
{
	int i, j;
	
	for(i=TF-1, j=0; i>=0, j<TF; i--, j++)
	{	
		vetInv[j] = vetorOrig[i];	
	}
}

void main() 
{
    int vetor[TF], vetInv[TF];

    carregarVetor(vetor);

    printf("\nVetor original:\n");
    exibirVetor(vetor);

    //inverterVetor(vetor);
    
    inverterVetorOtimizado(vetor, vetInv);

    printf("\nVetor depois da inversao:\n");
    exibirVetor(vetInv);
}
