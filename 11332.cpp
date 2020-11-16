#include<iostream>
#include<string>
#include<cmath>
using namespace std;
void num_11332()
{
	string S;
	unsigned long long N, T, L;
	cin >> S >> N >> T >> L;
	bool check = true;
	if (S == "O(N)")
	{
		if (N * T > L * pow(10, 8)) cout << "TLE!" << endl;
		else cout << "May Pass." << endl;
	}
	if (S == "O(N^2)")
	{
		if (pow(N, 2) * T > L * pow(10, 8)) cout << "TLE!\n";
		else cout << "May Pass.\n";
	}
	if (S == "O(N^3)")
	{
		for (int i = 1; i <= N; i++)
		{
			if (pow(N, 3) * T > L * pow(10, 8))
			{
				cout << "TLE!\n";
				check = false;
				break;
			}
		}
		if(check==true) cout << "May Pass.\n";
	}
	if (S == "O(2^N)")
	{
		for (int i = 1; i <= N; i++)
		{
			if (pow(2,N) * T > L * pow(10, 8))
			{
				cout << "TLE!\n";
				check = false;
				break;
			}
		}
		if (check == true) cout << "May Pass.\n";
	}
	if (S == "O(N!)")
	{
		unsigned long long temp=1;
		for (int i = N; i >= 1; i--)
		{
			temp = temp * i;
			if (temp * T > L * pow(10, 8))
			{
				cout << "TLE!\n";
				check = false;
				break;
			}
		}
		if (check == true) cout << "May Pass.\n";
	}
}

int main()
{
	int Case;
	cin >> Case;
	for (int i = 0; i < Case; i++) num_11332();



	
}