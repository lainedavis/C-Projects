#include <stdio.h>
#define getName(var) #var

int main(void)
{
	// update initial starting points:
	float t = 0;
	float f = 4;

	// update step size:
	float step = .25;

	// update DE:
	float fprime = (f*f)/(t-2);

	char myfprime[] = "f'";
	printf("\n%15s%15s%15s\n", getName(t), getName(f), myfprime);
	printf("%15.5f%15.5f%15.5f\n", t, f, fprime);
	float i;
	// update ending t value:
	float tstop = 1;
	for(i=(t+step); i<(tstop+step); i+=step){
		f = f+fprime*step;
		t = t+step;
		// update DE again:
		fprime = (f*f)/(t-2);
		printf("%15.5f%15.5f%15.5f\n", i, f, fprime);
		if(i==tstop)
			printf("\nf(%4.1f) = %f \n", tstop, f);
		else
			continue;
	}

	return 0;
}