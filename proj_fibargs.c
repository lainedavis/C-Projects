#include <stdio.h>

int main(int argc, char *argv[])
{
	int a;
	sscanf(argv[1], "%i", &a);

	double first = 0;
	double second = 1;
	printf("\n%lf \n%lf \n", first, second);
	int i;
	double new;
	for(i=0; i<(a-2); i++) {
		printf("%lf \n", first+second);
		new = first+second;
		first = second;
		second = new;
	}

	return 0;
}