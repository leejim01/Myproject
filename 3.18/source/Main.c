#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	
	float i, j;
	i = 0;

	while (i != -1)
	{
		
		printf("Enter sales in dollars(-1 to end):");
		scanf_s("%f", &i);
		if (i == -1)
			break;

		j = 200 + (i*0.09);
		printf("salary is:%f\n", j);
	}
	system("pause");
	return 0;
}
