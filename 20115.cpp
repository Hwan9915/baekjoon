#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	long double max=0, sum = 0;
	long double temp;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		sum += temp;
		if (temp > max) max = temp;
	}
	sum -= max;
	sum /= 2;
	cout << max + sum;
}