#include<iostream>
#include<array>
using namespace std;

void num_2435()
{
	int N, K;
	cin >> N >> K;
	int* list = new int[N];
	int temp;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		list[i] = temp;
	}
	int max = -10000;
	for (int i = 0; i < N - K + 1; i++)
	{
		temp = 0;
		for (int j = i; j < i + K; j++) temp += list[j];
		if (temp > max) max = temp;
	}
	cout << max << endl;
}

int main()
{
	num_2435();
}