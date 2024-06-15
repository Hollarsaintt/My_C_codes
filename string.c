#include <stdio.h>

int main()
{
	char name[31];
	printf("What is your name: ");
	
	scanf("%s", name);

	
	printf("Hey, %s, How are you doing today?\n", name);
	printf("I am good, %s\n", "Thank you.");
	return 0;
}
