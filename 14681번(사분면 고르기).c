//https://www.acmicpc.net/problem/14681

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define elif else if
int choice_quadrant(int x, int y)
{
	if (x > 0 && y > 0) return 1;
	elif(x < 0 && y > 0) return 2;
	elif(x < 0 && y < 0) return 3;
	else return 4;
}


int main(void) {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d",choice_quadrant(x, y));
	return 0;
}