#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j,n;
	printf("(A)\n");
	n = 0;
	for (i = 1; i <= 10; i++)
	{
		n++;
		for (j = 1; j <= 10; j++)
		{
			if (j <= n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("(B)\n");
	n = 11;
	for (i = 1; i <= 10; i++)
	{
		n--;
		for (j = 1; j <= 10; j++)
		{
			if (j <= n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("(C)\n");
	n = 0;
	for (i = 1; i <= 10; i++)
	{
		n++;
		for (j = 1; j <= 10; j++)
		{
			if (j >= n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	printf("(D)\n");
	n = 10;
	for (i = 1; i <= 10; i++)
	{
		
		for (j = 1; j <= 10; j++)
		{
			if (j >= n)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		n--;
		printf("\n");
	}
	return 0;
}