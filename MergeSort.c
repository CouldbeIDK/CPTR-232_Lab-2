#include <stdlib.h>
#include <stdio.h>

void MERGE(A,p,q,r)

int main() {
	int sorted[10000];
	int i, j, k, key, slength;
	i=0;
	while ((scanf("%d", &j) >= 0) && (i<64)){
		sorted[i++] = j;
	}
	slength = i;
	
	for (k=0 ; k < slength ; k++){
		printf("%d\n", sorted[k]);
	}
}