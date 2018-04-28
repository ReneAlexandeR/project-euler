/* Sum square difference - Project Euler */

#include "stdio.h"


unsigned long sumOfN(int);
unsigned long sumOfSquares(int);

int main()
{
	long diff;
	volatile unsigned long sumofsquares;
	unsigned long squareofsum;
	unsigned long sumofNterms;
	
	sumofNterms = sumOfN(100);
	squareofsum = sumofNterms*sumofNterms;
	
	sumofsquares = sumOfSquares(100);

	diff = squareofsum - sumofsquares;
	
	printf("The sum of squares is: %d\n",sumofsquares);
	printf("The difference of the sums is: %d\n", diff);
	return 0;
}

unsigned long sumOfN(int nterms)
{
	unsigned long sum = 0;
	int n;
	
	for (n=1; n<=nterms; n++){
		sum += n;
	}
	
	return sum;
}

unsigned long sumOfSquares(int nterms)
{
	unsigned long sum = 0; 
	int n;

	for (n=1; n<=nterms; n++){
		sum += n*n;
	}

	return sum;
}