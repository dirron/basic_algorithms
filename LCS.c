#include <stdio.h>

int main() {
	int size=6, i, j;
	char S1[] = "ABAZDC";
	char S2[] = "BACBAD";
	int LCS[size+1][size+1];
	
	for(i=0; i<size+1; i++) {
		LCS[0][i] = 0;
		LCS[i][0] = 0;
	}
	for(i=1; i<size+1; i++) {
		for(j=1; j<size+1; j++) {
			if(S1[i-1] == S2[j-1])
				LCS[i][j] = 1 + LCS[i-1][j-1];
			else
				LCS[i][j] = max(LCS[i-1][j], LCS[i][j-1]);
		}
	}
	for(i=0; i<size+1; i++) {
		for(j=0; j<size+1; j++)
			printf("%d ", LCS[i][j]);
		printf("\n");
	}
	printf("LCS=%d\n", LCS[size][size]);
	return 0;
}
int max(int a, int b);
int max(int a, int b) {
	if(a >= b) return a; 
	return b;
}
