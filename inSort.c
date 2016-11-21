#include <stdio.h>
void inSort(int A[], int n);
void shift(int A[], int i, int j);
int main() {
	int A[] = {3,1,5,4,4,7};
	int n=sizeof(A)/sizeof(A[0]), i;
	printf("Before:\n");
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
	printf("\n");
	inSort(A, n);
	printf("After:\n");
	for(i=0; i<n; i++)
		printf("%d ", A[i]);
	printf("\n");
	return 0;
}
void inSort(int A[], int n) {
	int i, j;
	for(i=1; i<n; i++) {
		for(j=0; j<=i-1; j++) {
			if(A[i] < A[j]) {
				shift(A, i, j);
			}
		}
	}
}
void shift(int A[], int i, int j) {
	int c, value, temp;
	value = A[i];
	for(c=i; c>j; c--) {
		A[i] = A[i-1];
	}
	A[j] = value;
}
