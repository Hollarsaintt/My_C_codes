#include <stdio.h>

int main()
{
	double  radius, area;
	printf("What is the radius of the circle: ");
	scanf("%lf", &radius);
	
	//area = 3.142 * radius * radius;
	printf("The area of the circle with radius %lf is %f\n", radius, (3.142 * radius * radius)); 

	return 0;
}
