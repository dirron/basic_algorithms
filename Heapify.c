#include <stdio.h>
static int k=0, count=0;
static int A[] = {4,2,1,8,6,5,10,9,11,16};
void heapify(int i, int j);
int max(int a, int b);
int main() {
	int c;
	heapify(0,9);
	for(c=0; c<10; c++)
		printf("%d ", A[c]);
	printf("\nCount=%d\n", count);
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
	count++;
}
int max(int a, int b) {
	if(a>=b) return a;
	return b;
}
