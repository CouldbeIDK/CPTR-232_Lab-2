#include <stdlib.h>
#include <stdio.h>

//the Loop invariant is that everything before index
// i is sorted.

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
	for(i=0; i <= slength - 2; i++){
		for(j=(slength-1); j >= i+1; j--){
			if (sorted[j] < sorted[j-1]){
				key = sorted[j];
				sorted[j] = sorted[j-1];
				sorted[j-1] = key;
			}
		}
	}
	end_t = clock();
	for (k=0 ; k < slength ; k++){
		printf("%d\n", sorted[k]);
	}
	printf("This algorithm took %ld clocks to finish", end_t - start_t);
}