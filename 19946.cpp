#include<iostream>
using namespace std;

int main()
{
	unsigned long long N;
	cin >> N;
	if (N == 18446744073709551615)
	{
		cout << 64;
		return 0;
	}
	int k = 0;
	while (1)
	{
		N /= 2;
		if (N % 2 == 1)
		{
			N++;
			break;
		}
	}
	while (N != 1)
	{
		N /= 2;
		k++;
	}
	cout << k;
}