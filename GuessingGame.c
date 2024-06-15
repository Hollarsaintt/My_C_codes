#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int input, maxValue = 10;

	srand(time(NULL)); //seed the random number generator to the clock
	int randomNumber = rand() % maxValue; //generates a pseudo random number restricted to 0 to  maxValue-1
	randomNumber++;  //ensures the randomNumber is between 1 and maxValue
		
	printf("%d\n", randomNumber);
	printf("Welcome to the guessing game!, Guess a Number between 1 to %d: ", maxValue);
	scanf("%d", &input);

	if(input == randomNumber)
	{
		printf("You win!\n");
	}
	else
	{
		printf("You did not win! Try again!\n");
	}
}
