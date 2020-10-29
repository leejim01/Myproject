#include<stdio.h>
#include<stdlib.h>
int main() 
{
	int year;
	float rate,mon;
	mon = 5000;
	for (rate = 0.1; rate <= 0.125; rate = rate + 0.005) 
	{
		printf("¶×²v:%f\n", rate);
		for (year = 1; year <= 15; year++) {
			
			mon = (mon * rate) + mon;
			printf("%f\n", mon);

		}
	}
	
}