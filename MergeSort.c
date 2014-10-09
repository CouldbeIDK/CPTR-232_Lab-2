#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/*

The Loop Invariant is that the top number of any
half of the array is always the lowest number in
the list. Even if the top is taken off.

*/
void MERGE(int *A,int p,int q,int r){
	int na = q - p + 1;
	int nb = r - q;
	int L[na], R[nb], i, j, k;
	for(i = 0; i < na ; i++){
		L[i] = A[p+i-1];
	}
	for(j = 0; j < nb ; j++){
		R[j] = A[q+j];
	}
	i = 0;
	j = 0;
	k = 0;
	for (k = p; k <= r ; k++){
		if ((L[i] <= R[j]) && (i < na)){
			A[k] = L[i];
			i = i + 1;
		}else if(j < nb){
			A[k] = R[j];
			j = j + 1;
		}
	}
}

void MERGESORT(int *A, int p, int r){
	if (p < r) {
		int q = (p + r)/2;
		MERGESORT(A,p,q);
		MERGESORT(A,q + 1, r);
		MERGE(A,p,q,r);
	}
}

int main() {
	int sorted[10000];
	int i, j, k, key, slength;
	i=0;
	while ((scanf("%d", &j) >= 0) && (i<64)){
		sorted[i++] = j;
	}
	slength = i;
	
	MERGESORT(sorted, 0, slength-1);
	
	for (k=0 ; k < slength ; k++){
		printf("%d\n", sorted[k]);
	}
}