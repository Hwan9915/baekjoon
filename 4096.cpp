#include<iostream>
#include<string>
using namespace std;
bool pelin(string temp)
{
	int size = temp.size();
	bool check = true;
	for (int i = 0; i < size / 2; i++)
	{
		if (temp[i] == temp[size - 1 - i])
			check = true;
		else
		{
			check = false;
			break;
		}
	}
	return check;
}

int main()
{
	string Number_str;
	while (1)
	{
		cin >> Number_str;
		if (Number_str == "0") break;
		bool check = true;
		int Number_Size = Number_str.size(), Count = 0;
		int Number_int = stoi(Number_str);
		while (1)
		{			
			string Number_Temp;
			Number_Temp = to_string(Number_int);
			string K="";
			for(int i = Number_Temp.size(); i < Number_Size; i++)
			{
				K = K + "0";
			}
			Number_Temp = K + Number_Temp;
			check = pelin(Number_Temp);
			if (check) break;
			Count++;
			Number_int = stoi(Number_Temp) + 1;
		}
		cout << Count << endl;
	}
}