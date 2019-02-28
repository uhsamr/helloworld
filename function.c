#include "function.h"

int sample_function(int test1, int test2)
{
	int sum;
	sum = (test1 + test2) / 2;
	return sum;
}

void testing(int test){
	printf("TEST SCORE = %d\n\n", test);
}

void letterswitch(char letter)
{
		switch(letter){

		case 'a':
			printf("This is the first option\n\n");
		break;
		
		case 'b':
			printf("This is the second option\n\n");
		break;	
		
		case 'c':
			printf("This is the third option\n\n");
		break;
		
		case 'd':
			printf("This is the fourth option\n\n");
		break;	
		
		default:
			printf("you didnt choose anything, you put: %c\n\n",letter);
		break;
		
	}//end switch
}

void surface(void){
	printf("This was added on the surface");
}

