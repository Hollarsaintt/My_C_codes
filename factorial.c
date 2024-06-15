#include <stdio.h>

int main()
{
	
	int val;
	printf("What is the number: ");
	scanf("%d", &val);
	
	int factorial = 1;
	int input = val;
	while (val >= 2)
	{
		factorial *= val;
		val--;
	}
	
	printf("The factorial of %d is %d.\n", input, factorial);
	return 0;
}
