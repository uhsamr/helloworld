#include "function.h"

int main() 
{
	int test1, test2, sum;
	int whatihadbefore = 13;
	char dat[50] = "Happy?";
	char letter;
	time_t result = time(NULL);
	
	printf("Enter test 1 score\n");
	scanf(" %d", &test1);
	
	printf("Enter test 2 score\n");
	scanf(" %d", &test2);
	
	sum = sample_function(test1, test2);
	
	printf("Your average test score is : %d\n\n",sum);
	
	testing(whatihadbefore);
	
	printf("The current time and date is : %s\n\n", asctime( gmtime( &result ) ) );

	printf("%s\n\n", dat);//print a string
	
	printf("Enter an option a - d:\n\n");
	scanf(" %c", &letter);//use space infront %c to avoid the new line when reading scanf.
	letterswitch(letter);
	
	NUC();
	
	
	return 0;
}