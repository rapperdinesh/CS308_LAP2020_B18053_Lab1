/* This program computes the square root of a
positive number. */
#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// This is an experminatal comment for Lab1
// Below is the main function
// String---(ATOI)--->Integer

int main(int argc, char* argv[]) {



	if (argc != 2) {
		printf("NEGSUPPORT:Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);

	if(input<0){

			printf("NEGSUPPORT:Sqrt of %d is %fi\n",input,sqrt(-1*input));

    	return(0);
	}

	else{

		int num_less,num_greater;
		num_less = floor(input);
		num_greater = ceil(input);

		if(num_less == num_greater){
			printf("NEGSUPPORT:Sqrt of %d is %f\n",input,sqrt(input));
			printf("NEGSUPPORT:End of program. Exiting.\n");
		}
	}
return(0);

} // end main
