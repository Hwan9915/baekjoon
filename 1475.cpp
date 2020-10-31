#include<iostream>
#include<string>
using namespace std;

void num_1475()
{
	string room_number;
	cin >> room_number;
	int list[10] = { 0, },max=0;
	for (int i = 0; i < room_number.size(); i++) list[room_number[i] - '0']++;
	int card_6_9 = list[6] + list[9];
	for (int i = 0; i < 10; i++)
	{
		if (i == 6 || i == 9)
		{
			if ((card_6_9 % 2 == 0)&&(card_6_9 / 2 > max)) max = card_6_9 / 2;
			else if (double(card_6_9) / 2 > max) max = card_6_9 / 2 + 1;
		}
		else if (list[i] > max) max = list[i];
	}
	cout << max;
}

int main()
{
	num_1475();
}