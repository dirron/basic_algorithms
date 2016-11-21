#include <stdio.h>
int recPow(int x, int n);
int main(int argc, char *argv[]) {
	int x, n;
	sscanf(argv[1], "%d", &x);
	sscanf(argv[2], "%d", &n);
	printf("%d\n", recPow(x, n));
	return 0;
}
int recPow(int x, int n) {
	int y;
	if(n == 1) return x;
	if(n%2 == 0) {
		y = recPow(x, n/2);
		return y*y;
	} else {
		y = recPow(x, (n-1)/2);
		return y*y*x;
	}
}
