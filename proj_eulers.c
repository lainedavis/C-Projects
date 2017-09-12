#include <stdio.h>

int main(void)
{
	// Adjust starting points, step, both DEs, and starting/ending t values:

	float t = 0;
	float f = 4;

	float step = .25;

	//equation
	float fprime = (f*f)/(t-2);

	printf("%f \n", f);
	float i;
	for(i=.25; i<1.25; i+=step){
		f = f+fprime*step;
		t = t+step;
		fprime = (f*f)/(t-2);
		printf("%f \n", f);
	}

	return 0;
}