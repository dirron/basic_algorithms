#include <stdio.h>
int recPow(int x, int n);
int main(int argc, char *argv[]) {
	int n, x;
	sscanf(argv[1], "%d", &x);
	sscanf(argv[2], "%d", &n);
	printf("%d\n", recPow(x, n));
}
int recPow(int x, int n) {
	int result=1;
	int i;
	for(i=0; i<n; i++)
		result = x*result;
	return result;
}
