#include <stdio.h>

int radius, area;

int main(void)
{
	printf("Enter radius (i.e 10): ");
	scanf("%d", &radius);
	area = (int) (3.1459 * radius * radius);
	printf("\n\nArea = %d\n", area);
	return 0;
}
