/*
This code finds and print in a row all 
the prime numbers from 2 upto the input Number from the user
using Eratostenes sieving:

Any number, N that is not prime has a factor between 2 to sqrt(N)
Therefore if the user_input is N, any number that is prime and
between 2 to N (inclusive) must not have a factor between
2 to sqrt(N)

Thus the sieving use this principle to cross out composite numbers (numbers that are not prime)
by crossing out all multiples of 2,3,4,...,sqrt(N)
and returned the ones not crossed out as prime number.
*/


#include <stdio.h>
#include <math.h>

int main()
{

	int input;
	printf("Type in a Number between 1 to infinity: ");
	scanf("%d", &input);

	int store[input];
	
	for(int i = 0; i<=input; i++)
	{
		store[i] = 1;

	}

	store[0] = 0;

	for(int num = 2; num <= floor(sqrt(input)); num++)
	{
		int k = 2;
		
		while (num * k <= input)
		{
			store[(num * k)-1] = 0;
			k++;
		}
	
	}

	for(int j = 0; j <= input-1; j++)
	{
		if (store[j] == 1)
		{
			printf("%d ", j+1);
		}
	}
	
	printf("\n");
	
}
