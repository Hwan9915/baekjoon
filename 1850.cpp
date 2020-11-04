#include<iostream>
#include<algorithm>
using namespace std;

long long gcd(long long a, long long b)
{
	long long temp;
	while (1)
	{
		if (b == 0) return a;
		temp = b;
		b = a % b;
		a = temp;
	}
}

int main()
{
	long long a, b,N;
	cin >> a >> b;
	N = gcd(a, b);
	for (int i = 0; i < N; i++) cout << "1";
}