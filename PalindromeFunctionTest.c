/* Largest palindrome product - Project Euler */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

//#define	INICIO	999
//#define FIN		100

// Function prototype : determines if the number is a palindrome
bool isPalindrome(unsigned long num);

int main(){
	
	unsigned long test1 = 3;
	unsigned long test2 = 0;
	unsigned long test3 = 11;
	unsigned long test4 = 123;
	unsigned long test5 = 1221;
	unsigned long test6 = 12345;
	unsigned long test7 = 110011;
	int i;
	bool array[7];
	
	array[0] = isPalindrome(test1);
	array[1] = isPalindrome(test2);
	array[2] = isPalindrome(test3);
	array[3] = isPalindrome(test4);
	array[4] = isPalindrome(test5);
	array[5] = isPalindrome(test6);
	array[6] = isPalindrome(test7);
	
	printf("Result: %d %d %d %d %d %d %d",
	array[0],array[1],array[2],array[3],array[4],array[5],array[6]);
	
	//pal = isPalindrome(MAX_product);
	//fputs(pal ? "true\n" : "false\n", stdout);
	
	
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

