#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main() 
{
	int principal, days;
	float interest, rate;
	principal = 0;
	days = 0;
	rate = 0;
	while (principal !=-1)
	{
		if (principal == -1)
			break;
		printf("Enter loan principal(-1 to end:");
		scanf_s("%d", &principal);
		printf("Enter interest rate:");
		scanf_s("%f", &rate);
		printf("Enter term of the loan in days:");
		scanf_s("%d", &days);
		interest = principal * rate*days / 365;
		printf("The interest charge is$:%.2f\n",interest);

	}

}