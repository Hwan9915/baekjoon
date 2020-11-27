#include<stdio.h>
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int A = a - b;
	int B = c - b;
	int i = (B / A);
	if (B % A != 0) {
		i = i + 1;
	}
	printf("%d", i);

	return 0;
}