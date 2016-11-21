#include <stdio.h>

int main() {
	char S1[] = "ABAZDC";
	char S2[] = "BACBAD";
	int x=5, y=5;
	printf("%d\n", LCS(S1, S2, x, y));
}
int LCS(char S1[], char S2[], int x, int y);
int LCS(char S1[], char S2[], int x, int y) {
	if(x==-1 || y==-1) return 0;
	else if(S1[x] == S2[y])
		return 1 + LCS(S1, S2, x-1, y-1); // matching, add 1 to LCS and LCS with length-1
	else
		return max(LCS(S1, S2, x-1, y), LCS(S1, S2, x, y-1));	// last doesn't match, char is irrelevant
									// check if last char of S1 matches next char in S2, vice versa
}
int max(int a, int b);
int max(int a, int b) {
	if(a >= b) return a;
	return b;
}
