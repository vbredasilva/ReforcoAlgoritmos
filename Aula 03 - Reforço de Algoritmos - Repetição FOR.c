#include<stdio.h>
void main()
{
	float nota, acumulaNota = 0, media;
	int cont;
	for(cont=1; cont<=3; cont++)
	{
		printf("\nInforme a %d nota: ", cont);
		scanf("%f", &nota);
		acumulaNota = acumulaNota + nota;
	}
	cont--;
	media = acumulaNota / cont;
	printf("\nA media dos %d alunos e: %.2f", cont, media);
}

//Nesse programa estamos calculando a média de 3 notas
//Estamos utilizando a variável cont para controlar o FOR e também para
//exibir no Printf a ordem da nota a ser inserida, 1º, 2º e 3º.
//Dessa forma, após inserir a 3º nota, o cont passará a ser 4, e então sairemos da repetição.
//Quando sairmos da repetição, precisamos calcular a média, então devemos decrementar o cont 
//para calcularmos a média, pois esperamos que o cont seja 3 e não 4.
