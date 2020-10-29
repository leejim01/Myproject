#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	for (i = 1; i <= 3; i++) {
		for (j = 1; j <= 10; j++) {
			if (i == 1 || i == 3 || j == 1 || j == 10)
				printf("+");
			else
				printf(" ");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}