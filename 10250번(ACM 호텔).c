//https://www.acmicpc.net/problem/10250

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int ACM_Hotel() {
	int height, weight, room;
	scanf("%d %d %d", &height, &weight, &room);
	int k = room % height;
	int j = room / height+1;
	if (k==0) k = height, j = j-1;
	int room_num = k * 100 + j;
	return room_num;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i= 0; i < N; i++) {
		printf("%d\n", ACM_Hotel());
	}
	return 0;
}