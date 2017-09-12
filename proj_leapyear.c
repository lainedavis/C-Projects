#include <stdio.h>
#include <math.h>

int main(void)
{
	printf("Enter a year to determine if it was/will be a leap year.\n");

	int year;
	scanf("%d", &year);

	if(year%4==0 && year<2017)
		printf("%i was a leap year!", year);
	else if (year%4==0 && year>2016)
		printf("%i will be a leap year!", year);
	else if (year%4!=0 && year<2017)
		printf("%i was not a leap year.", year);
	else
		printf("%i will not be a leap year.", year);

	return 0;
}