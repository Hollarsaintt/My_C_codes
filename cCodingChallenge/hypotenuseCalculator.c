#include <stdio.h>
#include <math.h>

int main()
{
	double a,b;
	
	printf("what is the value of a: ");
	scanf("%lf", &a);
	printf("what is the value of b: ");
	scanf("%lf", &b);
	
	double c = sqrt(a*a + b*b);
	printf("The value of the hypotenuse (c) = %f\n", c);
	return 0;
}
