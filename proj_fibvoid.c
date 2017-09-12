#include <stdio.h>

int main(void)
{
	printf("How many Fibonacci numbers would you like to know?\n");

	int number;
	scanf("%i", &number);

	int first = 0;
	int second = 1;
	printf("\n%i \n%i \n", first, second);
	int i;
	int new;
	for(i=0; i<(number-2); i++) {
		printf("%i \n", first+second);
		new = first+second;
		first = second;
		second = new;
	}

	return 0;
}

// doubles can also be used for larger numbers
// be sure to use the %lf specifier for this