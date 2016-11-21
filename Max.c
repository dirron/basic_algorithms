#include <stdio.h>
int maxPair(int a, int b);
int maxArray(int S[], size);
int main(int argc, char *argv[]) {
	int size = 8;
	int S[] = {4, 9, 2, 1, 5, 7, 10, 3};
}
int maxPair(int a, int b) {
	if(a >= b) return a;
	return b;
}
int maxArray(int S[], size) {
	int i;
	if(size == 2) return maxPair(S[0], S[1]);
	else {
		int S1[size/2], S2[size/2];
		for(i=0; i<size/2; i++)
			S1[i] = S[i];
		for(i=size/2; i<size; i++)
			S2[i] = S[i];
		maxArray(
	}
}
