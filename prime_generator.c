#include <stdio.h>


int is_prime(int k)
{
	if(k == 1 || k == 0)
		return 0;

	for(int i = 2; i * i <= k; i++)
	{
		if(k % i == 0)
			return 0;
	}

	return 1;
}

int main()
{

	int m, n, cases;

	scanf("%d", &cases);

	if(cases > 0 && cases <= 10)
	{
		for(int i = 0; i < cases; i++)
		{
			scanf("%d %d", &m, &n);
			if((n >= 1 && n <= 1000000000) && (m >= 1 && m <= 1000000000) && n - m <= 100000)
			{
				for(int j = m; j <= n; j++)
				{
					if(is_prime(j) == 1)
						printf("%d\n", j);
				}
				printf("\n");
			}
		}
	}


	return 0;

}