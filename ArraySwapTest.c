/* Array Swap test */

#include "stdio.h"
#include "string.h"

int main(){
	char array[6] = {'9','1','4','9','1','9'};
	char swap[6];
	int i;
	int array_size = 6;
	int result;
	
	for (int i=0; i<array_size ; i++){
		swap[i] = array[array_size - 1 - i];	
	}
	printf("Array: [%c %c %c %c %c %c]\n", array[0],array[1],array[2],array[3],array[4],array[5]);
	printf("Swap:  [%c %c %c %c %c %c]\n", swap[0],swap[1],swap[2],swap[3],swap[4],swap[5]);
	
	result = memcmp(array,swap, array_size);
	printf("%d       (0 is Palindrome, else is not)", result);
	return 1; 
}