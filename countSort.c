#include <stdio.h>
#define SIZE 8
#define k 9

int A[] = {4,6,2,1,7,9,3,3};
int B[SIZE];
int C[k];

void sort(int A[], int B[]);

int main() {
	for(int i=0; i<SIZE; i++)
		printf("%d ", A[i]);
	printf("\n");
	sort(A, B);
	for(int i=0; i<SIZE; i++)
		printf("%d ", B[i]);
	printf("\n");
}

void sort(int A[], int B[]) {
	for(int i=0; i<k; i++)
		C[k] = 0;
	for(int i=0; i<SIZE; i++)	// initial count
		C[A[i]-1]++;
	for(int i=0; i<k; i++)
		C[i] += C[i-1];		// accumulation
	for(int i=0; i<k; i++)
		printf("%d ", C[i]);
	printf("\n");
	for(int i=SIZE-1; i>=0; i--) {
		B[C[A[i]-1]-1] = A[i];
		C[A[i]-1]--;
	}
}
