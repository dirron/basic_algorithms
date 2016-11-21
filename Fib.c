#include <stdio.h>

int main(int argc, char *argv[]) {
	int n, a, b, out=0;
	int i;
	sscanf(argv[1], "%d", &n);
	if(n == 0 || n == 1) return n;
	else {
		a = 0;
		b = 1;
		for(i=1; i<n; i++) {
			out = a+b;
			b = a;
			a = out;
		}
		printf("%d", out);
	}
	printf("\n");
	return 0;
}
