#include <stdio.h>
#include <stdlib.h>

#define TAM 158

int multiplica (int *factorial, int *digitos, int n)
{
	//função que multiplica N por cada numero do vetor. Multiplicação do jeito que fazemos à mão
	int carry = 0;
	int aux;
	int i = 0;

	for(i; i < *digitos; i++)
	{
		aux = factorial[i] * n + carry;
		factorial[i] = aux % 10;
		carry = aux / 10;
	}
	while(carry) //esse loop é para quando temos carry no final da nossa multiplicação, quando extrapola o limite anterior do nosso vetor
		//devemos colocar os numeros em suas posições no vetor, e aumentá-lo a medida que o resultado vai crescendo
	{
		factorial[*digitos] = carry % 10;
		carry /= 10;
		(*digitos)++;
	}
}
int main()
{
	int cases;
	int n, digitos;
	int factorial[TAM];


	scanf("%d", &cases);
	if(cases >= 1 && cases <= 100)
	{
		for(int i = 0; i < cases; i++)
		{
			factorial[0] = 1;
			digitos = 1; //só tem um numero no vetor, o numero 1;
			
			scanf("%d", &n);

			for(int j = 1; j <= n; j++)
			{
				multiplica(factorial, &digitos, j);
			}

			for(int k = digitos - 1; k >= 0; k--)
				printf("%d", factorial[k]);

			printf("\n");


			//agora eu devo zerar o vetor novamente, para que ele esteja pronto para o proximo teste

			for(int l = 0; l < digitos; l++)
				factorial[l] = 0;
		}
	}
}