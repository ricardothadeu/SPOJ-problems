#include <stdio.h>
#include <math.h>

int main()
{
	long int n;
	unsigned int testes;
	int k = 0;
	int soma = 0;

	scanf("%d", &testes);
	if(testes >= 1 && testes <= 100000)
	{
		for(int i = 0; i < testes; i++)
		{
			scanf("%ld", &n);
			
			if(n >= 1 && n <= 1000000000)
			{
				soma = 0;

				k = (int)floor(log(n)/log(5));
	
				for(int i = 1; i <= k; i++) {
					soma += (int)floor(n/pow(5, i));
				}

				printf("%d\n", soma);
			}
		}
	}

	return 0;
}