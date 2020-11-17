#include<iostream>
#include<cstring>
using namespace std;

void num_10798()
{
	char list[5][16] = { {-1,} };
	for (int i = 0; i < 5; i++) cin >> list[i];

	for (int i = 0; i <15; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (list[j][i] == '\0') continue;
			else cout << list[j][i];
		}
	}
}
int main()
{
	num_10798();
}