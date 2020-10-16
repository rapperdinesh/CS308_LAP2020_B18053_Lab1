/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// This is an experminatal comment for Lab1
// Below is the main function
// String---(ATOI)--->Integer

int main(int argc, char* argv[]) {



	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);

	int num_less,num_greater;
	num_less = floor(input);
	num_greater = ceil(input);

if(num_less == num_greater){
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting.\n");
	return(0);
}

} // end main
