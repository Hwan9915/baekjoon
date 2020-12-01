//https://www.acmicpc.net/problem/1703

#include<stdio.h>
#pragma warning (disable : 4996)
#define size 20

int main()
{
	while (1)
	{
		int temp,year,sum=1;
		scanf("%d", &year);
		if (year == 0) break;
		for (int i = 0; i < year * 2; i++)
		{
			scanf("%d", &temp);
			if (i % 2 == 0) sum = temp * sum;
			else sum -= temp;
		}
		printf("%d\n", sum);

	}
	return 0;
}