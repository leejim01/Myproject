#include<stdio.h>
#include<stdlib.h>
int main() {


	int i, j, h, f;
	h = 5;
	f = 5;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (j <= h && j >= f)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
			printf("\n");
			if (i >= 5)
			{
				h--;
				f++;
			}
			else
			{
				h++;
				f--;
			}
		
	}
	system("pause");
	return 0;
}