#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	long temp,max=0;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		if (temp > max) max = temp;
	}
	cout << max;
}