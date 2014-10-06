/* Taken from http://www.tutorialspoint.com/c_standard_library/c_function_rand.htm with some modifications by me
such as allowing input from user on how long the file should be. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *args[])
{
	int i, n;
	time_t t;
	
	n = atoi(args[1]);
	
	/* Intializes random number generator */
	srand((unsigned) time(&t));
	/* Print n random numbers from 0 to 49 */
	for( i = 0 ; i < n ; i++ ) {
	printf("%d\n", rand() % 101);
	}
	
	return(0);
}