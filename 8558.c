//https://www.acmicpc.net/problem/8556

#include<stdio.h>
#include<string.h>
//n!의 1의 자리를 구하라
int main(void)
{
	int n;
	scanf("%d", &n);
	long long sum = n;
	char k[5000];
	for (int i = n-1; 0 < i; i--) sum = sum * i;
	if (n == 0) printf("1");
	else {
		sprintf(k, "%lld", sum);
		int len = strlen(k);
		printf("%c", k[len - 1]);
	}
	
	return 0;
}