// https://www.acmicpc.net/problem/5543

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int the_cheapest_set() 
{
	int burger, drink,cheaper_burger=2001,cheaper_drink=2001;

	for(int i=0;i<3;i++)
	{
		scanf("%d", &burger);
		if (burger < cheaper_burger)
		{
			cheaper_burger = burger;
		}
	}

	for (int i= 0; i < 2; i++)
	{
		scanf("%d", &drink);
		if (drink < cheaper_drink)
		{
			cheaper_drink = drink;
		}
	}

	return (cheaper_burger + cheaper_drink - 50);
}

int main()
{
	printf("%d", the_cheapest_set());
	return 0;
}