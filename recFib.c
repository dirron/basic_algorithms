#include <stdio.h>

int recFib(int n);
int main(int argc, char *argv[]) {
	int n;
	sscanf(argv[1], "%d", &n);
	printf("%d\n", recFib(n));
	return 0;
}
int recFib(int n) {
	if(n == 0 || n == 1)
		return n;
	else
		return recFib(n-1) + recFib(n-2);
}
