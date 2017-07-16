#include<stdio.h>
#include<math.h>

int root(int n)
{
	return (int)sqrt((float)n);
}

int f_isPrime5(int n)
{
	int i = 0;

	if (n < 2)
	{
		return 0;
	}

	if ((0 == n % 2) && (n != 2))
	{
		return 0;
	}

	if ((0 == n % 3) && (n != 3))
	{
		return 0;
	}

	if ((0 == n % 5) && (n != 5))
	{
		return 0;
	}

	for (i = 2; i*i<=n; i++)
	{
		if (0 == n % i)
		{
			return 0;
		}
	}

	return 1;
}

int f_isPrime4(int n)
{
	int i = 0;
	int m = 0;

	if (n < 2)
	{
		return 0;
	}

	if ((0 == n % 2) && (n != 2))
	{
		return 0;
	}

	if ((0 == n % 3) && (n != 3))
	{
		return 0;
	}

	if ((0 == n % 5) && (n != 5))
	{
		return 0;
	}

	m = root(n);

	for (i = 2; i <= m; i++)
	{
		if (0 == n % i)
		{
			return 0;
		}
	}

	return 1;
}

int f_isPrime3(int n)
{
	int i = 0;
	int m = 0;

	if (n < 2)
	{
		return 0;
	}

	m = root(n);

	for (i = 2; i <= m; i++)
	{
		if (0 == n % i)
		{
			return 0;
		}
	}

	return 1;
}

int f_isPrime2(int n)
{
	int i = 0;

	if (n < 2)
	{
		return 0;
	}

	for (i = 2; i <= root(n); i++)
	{
		if (0 == n % i)
		{
			return 0;
		}
	}

	return 1;
}


int f_isPrime1(int n)
{
	int i = 0;

	if (n < 2)
	{
		return 0;
	}

	for (i = 2; i < n; i++)
	{
		if (0 == n % i)
		{
			return 0;
		}
	}

	return 1;
}

int main()
{
	int i = 0;
	int j = 0;
	int n = 10000;
	int count[6] = {0};

	for (i = 2; i <= n; i++)
	{
		if (1 == f_isPrime1(i))
		{
			//printf("%d\n", i);
			count[0]++;
		}

		if (1 == f_isPrime2(i))
		{
			//printf("%d\n", i);
			count[1]++;
		}

		if (1 == f_isPrime3(i))
		{
			//printf("%d\n", i);
			count[2]++;
		}

		if (1 == f_isPrime4(i))
		{
			//printf("%d\n", i);
			count[3]++;
		}

		if (1 == f_isPrime5(i))
		{
			//printf("%d\n", i);
			count[4]++;
		}

	}

	for (j = 0; j < 5; j++)
	{
		printf("f_prime%d = %d\n", j+1, count[j]);
	}

	return 0;
}