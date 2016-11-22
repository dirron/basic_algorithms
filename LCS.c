#include <stdio.h>

int main() {
	int size=6, i, j;
	char S2[] = "ABAZDC";
	char S1[] = "BACBAD";
	int LCS[size+1][size+1];
	
	for(i=0; i<size+1; i++) { // initialize first row and column to 0
		LCS[0][i] = 0;
		LCS[i][0] = 0;
	}
	for(i=1; i<size+1; i++) { // letters of S1
		for(j=1; j<size+1; j++) { // letters of S2
			if(S1[i-1] == S2[j-1]) // if letters equal
				LCS[i][j] = 1 + LCS[i-1][j-1]; // add one+diagonal
			else
				LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]); // field is equal to largest value left or up (cumulative)
		}
	}
	printf("    ");
	for(i=0; i<size; i++)
		printf("%c ", S1[i]); // print S1
	printf("\n");
	for(i=0; i<size+1; i++) {
		if(i==0) printf("  ");
		if(i > 0) printf("%c ", S2[i-1]); // print S2
		for(j=0; j<size+1; j++)
			printf("%d ", LCS[i][j]);
		printf("\n");
	}
	printf("LCS=%d\n", LCS[size][size]);
	return 0;
}
int max(int a, int b);
int max(int a, int b) {
	if(a > b) return a; 
	return b;
}
