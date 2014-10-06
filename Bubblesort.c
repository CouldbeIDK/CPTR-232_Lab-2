#include <stdlib.h>
#include <stdio.h>

int main() {
	int sorted[10000];
	int i, j, k, key, slength;
	i=0;
	while ((scanf("%d", &j) >= 0) && (i<64)){
		sorted[i++] = j;
	}
	slength = i;
	for(i=0; i <= slength - 2; i++){
		for(j=(slength-1); j >= i+1; j--){
			if (sorted[j] < sorted[j-1]){
				key = sorted[j];
				sorted[j] = sorted[j-1];
				sorted[j-1] = key;
			}
		}
	}
	for (k=0 ; k < slength ; k++){
		printf("%d\n", sorted[k]);
	}
}