#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// The Loop invariant is that you always know that 
// everything before the last sorted int is in order
// starting with the very first index.

int main() {
	clock_t start_t, end_t;
	
	int sorted[10000];
	int i, j, k, key, slength;
	i=0;
	while ((scanf("%d", &j) >= 0) && (i<10000)){
		sorted[i++] = j;
	}
	slength = i;
	start_t = clock();
	for (j=1 ; j < slength ; j++){
		key = sorted[j];
		i = j - 1;
		while (i >= 0 && sorted[i] > key) {
			sorted[i+1] = sorted[i];
			i = i - 1;
		}
		sorted[i+1] = key;
	}
	end_t = clock();
	for (k=0 ; k < slength ; k++){
		printf("%d\n", sorted[k]);
	}
	printf("It took this algorithm %ld clocks to finish", end_t - start_t);
}