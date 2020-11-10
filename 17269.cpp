#include<iostream>
#include<string>
#include<vector>
using namespace std;
int check(char& A)
{
	switch (A)
	{
	case 'A':
		return 3;
	case 'B':
		return 2;
	case 'C':
		return 1;
	case 'D':
		return 2;
	case 'E':
		return 4;
	case 'F':
		return 3;
	case 'G':
		return 1;
	case 'H':
		return 3;
	case 'I':
		return 1;
	case 'J':
		return 1;
	case 'K':
		return 3;
	case 'L':
		return 1;
	case 'M':
		return 3;
	case 'N':
		return 2;
	case 'O':
		return 1;
	case 'P':
		return 2;
	case 'Q':
		return 2;
	case 'R':
		return 2;
	case 'S':
		return 1;
	case 'T':
		return 2;
	case 'U':
		return 1;
	case 'V':
		return 1;
	case 'W':
		return 1;
	case 'X':
		return 2;
	case 'Y':
		return 2;
	case 'Z':
		return 1;
	default:
		break;
	}
}


int main()
{
	int list[200];
	int a, b;
	cin >> a>> b;
	string A, B;
	cin >> A >> B;
	for (int list_i = 0,str_i=0; list_i < A.size() + B.size(); str_i++)
	{
		if (str_i < A.size())
		{
			list[list_i] = check(A.at(str_i));
			list_i++;
		}
		if (str_i < B.size())
		{
			list[list_i] = check(B.at(str_i));
			list_i++;
		}
	}
	int size = A.size() + B.size();
	for (int i = size; 2 < size; size--)
	{
		for (int j = 0; j < size; j++)
		{
			int temp = list[j] + list[j + 1];
			if (temp >= 10) list[j] = temp - 10;
			else list[j] = temp;
		}
	}
	int temp = list[0] * 10 + list[1];
	cout << temp << "%" << endl;

}