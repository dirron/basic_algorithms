#include <stdio.h>
static int k=0, n=7;
static int A[] = {12,10,15,19,8,7,20};
void heapify(int i, int j);
int max(int a, int b);
void buildheap();
int main() {
	int c;
	buildheap();
	for(c=0; c<n; c++)
		printf("%d ", A[c]);
	printf("\n");
}
void heapify(int i, int j) {
	int temp;
	if ((2*i + 2)<=j){
		k = max(A[2*i+1],A[2*i+2]);
		if(k==A[2*i+1])
			k=2*i+1;
		if(k==A[2*i+2])
			k=2*i+2;
	}
	else if (2*i+1<=j){
		k = 2*i+1;
	}
	else
		return;
	
	if (A[i]<A[k]){
		temp = A[i];
		A[i]=A[k];
		A[k]=temp;

	}
	heapify(k,j);
}
int max(int a, int b) {
	if(a>=b) return a;
	return b;
}
void buildheap() {
	int i;
	for(i=(n/2)-1; i>=0; i--)
		heapify(i, n-1);
}
