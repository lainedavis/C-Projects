#include <stdio.h>

int main(int argc, char *argv[])
{
	float temp;
	char type;
	sscanf(argv[1], "%f", &temp);
	sscanf(argv[2], "%c", &type);

	if(type=='c'){
		float fahrenheit = temp*1.8+32;
		printf("%f celsius = %f fahrenheit", temp, fahrenheit);
	} else if(type=='f'){
		float celsius = (temp-32)*.5556;
		printf("%f fahrenheit = %f celsius", temp, celsius);
	} else
		printf("\nInvalid input. \n"
				"Try entering a \"c\" or \"f\" after your temperature.");

	return 0;
}