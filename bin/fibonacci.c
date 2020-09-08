/**
 * @file fibonacci.cpp
 *
 * @version 01.01 2020-08-15
 *
 * @brief 
 *
 * @ingroup fibonacci
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */
#include <stdio.h>

unsigned long long int fibonacci(unsigned int n);

int main()
{
	unsigned int number;

	printf("Enter an intager: ");
	scanf("%u", &number);

	printf("Fibonacci(%u) = %lld\n", number, fibonacci(number));

	return 0;
}

unsigned long long int fibonacci(unsigned int n)
{
	if(n == 0 || n == 1)
	{
		return n;
	}
	else
	{
		return fibonacci(n-1) + fibonacci(n-2);
	}
}
