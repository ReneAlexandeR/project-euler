/* Sum of the even numbers of the Fibonacci series */

#include "stdio.h"

#define MAX_FIBONACCI	4000000

int main()
{
	volatile unsigned long Fib_current = 0; 
	volatile unsigned long Fib_prev2 = 1;
	volatile unsigned long Fib_prev1 = 1;
	volatile unsigned long counter;
	volatile unsigned long sum = 0;
	volatile unsigned long temp1, temp2;
	
	for (counter = 0; Fib_current < MAX_FIBONACCI; counter++)
	{
		Fib_current = Fib_prev1 + Fib_prev2;
		
		printf("Current Fibonacci term: %u\n", Fib_current);
		if (Fib_current%2 == 0) sum += Fib_current;
		// update
		temp1 = Fib_current;
		temp2 = Fib_prev1;
		
		Fib_prev1 = temp1;
		Fib_prev2 = temp2;
	}	
	
	printf("The sum of the even Fibonacci numbers before 4MM is: %u\n", sum);
	return 0;
}