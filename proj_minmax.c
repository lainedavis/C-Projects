#include <stdio.h>

int main(void)
{
	printf("Enter three integers:\n");

	int num1,num2,num3;
	scanf("%i%i%i", &num1, &num2, &num3);

	if(num1<num2 && num1<num3)
		printf("The smallest of these is %i\n", num1);
	else if(num2<num1 && num2<num3)
		printf("The smallest of these is %i\n", num2);
	else
		printf("The smallest of these is %i\n", num3);

	if(num1>num2 && num1>num3)
		printf("The greatest of these is %i\n", num1);
	else if(num2>num1 && num2>num3)
		printf("The greatest of these is %i\n", num2);
	else
		printf("The greatest of these is %i\n", num3);

	return 0;
}