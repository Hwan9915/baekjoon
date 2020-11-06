//https://www.acmicpc.net/problem/5618

#include<stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	int N,a[3];
	scanf("%d", &N);
	if (N == 2) {
		scanf("%d %d", &a[0], &a[1]);
		if (a[0] > a[1]) for (int i = 1; i <= a[0]; i++) if (a[0] % i == 0 && a[1] % i == 0) printf("%d\n", i);
		if(a[0] <= a[1])for (int i = 1; i <= a[1]; i++) if (a[0] % i == 0 && a[1] % i == 0) printf("%d\n", i);
	}
	if (N == 3) {
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		if (a[0] > a[1]&&a[0]>a[2]) for (int i = 1; i <= a[0]; i++) if (a[0] % i == 0 && a[1] % i == 0 &&a[2] %i==0) printf("%d\n", i);
		if (a[1] > a[0] && a[1] > a[2]) for (int i = 1; i <= a[1]; i++) if (a[0] % i == 0 && a[1] % i == 0 && a[2] % i == 0) printf("%d\n", i);
		if (a[2] >= a[0] && a[2] >= a[1]) for (int i = 1; i <= a[2]; i++) if (a[0] % i == 0 && a[1] % i == 0 && a[2] % i == 0) printf("%d\n", i);
	}
	return 0;
}