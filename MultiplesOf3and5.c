/* Multiples of 3 and 5 - Project Euler */

#include "stdio.h"
 
 int main(){
	 int sum = 0;
	 
	 for (int counter=0; counter <1000;counter++){
		 
		 // Check that the modulus is zero
		 if ((counter%3==0) || (counter%5==0)){
			sum += counter;
		 }
	 }
	 printf("The sum is :%d", sum);
	 return 0;
 }
 
 