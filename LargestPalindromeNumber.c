/* Largest palindrome product - Project Euler */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//#define	INICIO	999
//#define FIN		100

// Function prototype : determines if the number is a palindrome
bool isPalindrome(unsigned long num);

int main(){
	
	
	volatile unsigned long x,y,product = 0;  
	volatile unsigned long MAX_product = 101;
	volatile bool pal;
	
	//pal = isPalindrome(MAX_product);
	//fputs(pal ? "true\n" : "false\n", stdout);
	
	//printf("Before double for loop\n");
	for (x = 999;x > 100;x--){
		//printf("Current x: %u\n", x);
		
		for (y = 999;y > 100;y--){
			
			product = x*y;
			//printf("Current y: %d\n", x, y);
			pal = isPalindrome(product);
			//printf("Palindrome: %d\n", pal);
			if (pal && product > MAX_product){
				MAX_product = product;
			}
		}	
	}
	//printf("After double for loop\n");
	
	printf("The max palindrome for product of three digit integers is: %d", MAX_product);
	return 0;
}


bool isPalindrome(unsigned long num)
{
	// Define how to decide if the number is a palindrome
	// Read digits in the integer to decide array size
	bool result;
	
	int array_size = 0;
	unsigned long temp;
	temp = num;
	//printf("Number: %u\n", num);
	while (temp!= 0){
		temp = temp/10;
		array_size++;
	}
	
	//printf("Number of digits: %d\n", array_size);
	// Create arrays of the proper size
	char array[array_size];
	char swap[array_size];
	// Read the integer as a char array
	sprintf(array, "%u", num);
	//printf("Array: [%c  %c  %c]\n", array[0],array[1],array[2]);
	// Swap order in the array
	for (int i=0; i<array_size ; i++){
		swap[i] = array[array_size - 1 - i];	
	}
	//printf("Swap: [%c  %c  %c]\n", swap[0],swap[1],swap[2]);
	if (memcmp(array,swap,array_size) == 0){
		result = true; 
	}
	else{
		result = false;
	}
	return result;
}

