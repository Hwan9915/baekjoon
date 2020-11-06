#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int list[6],num;
		for (int j = 0; j < 6; j++) cin >> list[j];

		double r3,r_Big,r_Small;
		r3 = sqrt(pow((list[0] - list[3]), 2) + pow((list[1] - list[4]), 2));
		
		if (list[2] > list[5]) r_Big = list[2], r_Small = list[5];
		else r_Big = list[5], r_Small = list[2];

		if ((list[0] == list[3]) && (list[1] == list[4]) && (list[2] == list[5])) num = -1;
		else if ((r3 > (double(list[2]) + double(list[5])))||r_Big>(r3+r_Small)) num = 0;
		else if ((r3 == (double(list[2]) + double(list[5])))|| r_Big == (r3 + r_Small)) num = 1;
		else num = 2;

		cout << num<<endl;
	}
	
}