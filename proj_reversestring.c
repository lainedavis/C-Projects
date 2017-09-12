#include <stdio.h>
#include <string.h>

int main(void)
{
	printf("Enter a string\n");

	char MyArray[100];
	fgets(MyArray, 100, stdin);

	printf("\nYour string reversed becomes:");

	int i = 0;
	for (i=0; i<strlen(MyArray); i++){
		printf("%c", MyArray[strlen(MyArray)-1 - i]);
	}

	return 0;
}