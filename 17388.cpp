//https://www.acmicpc.net/problem/17388

#include<stdio.h>

#pragma warning (disable : 4996)
#define size 3

int main()
{
	int a[size], sum = 0, index, low = 101;
	for (int i = 0; i < size; i++) scanf("%d", &a[i]);
	for (int i = 0; i < size; i++) sum += a[i];
	if (sum >= 100) printf("OK");
	else
	{
		for (int i = 0; i < size; i++)
		{
			if (a[i] < low)
			{
				low = a[i];
				index = i;
			}
		}
		if (index == 0) printf("Soongsil");
		else if (index == 1) printf("Korea");
		else printf("Hanyang");
	}
	return 0;
}