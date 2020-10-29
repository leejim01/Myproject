#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int hour, rate, sal;
	
	    hour = 0;
		while (hour != -1)
		{
		printf("enter of hours worked:");
		scanf("%d", &hour);
		if (hour == -1)
		{
			break;
		}
		printf("enter hourly rate of the worker:");
		scanf("%d", &rate);
		sal = hour * rate;
		printf("salary is %d\n", sal);
	}
	return 0;
}