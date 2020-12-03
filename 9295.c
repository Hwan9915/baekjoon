//https://www.acmicpc.net/problem/9094

#include<stdio.h>
#pragma warning(disable : 4996)
int main(void)
{
	int N,cnt=1;
	scanf("%d", &N);
	for (int k = 0; k < N; k++)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		printf("Case %d: %d\n", cnt,n+m);
		cnt++;
	}
	return 0;
}