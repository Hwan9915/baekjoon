#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main()
{
	int N, P;
	vector<string> list;
	int W, L, G;
	cin >> N >> P;
	cin >> W >> L >> G;
	for (int i = 0; i < P; i++)
	{
		string name, seng;
		cin >> name >> seng;
		if (seng == "W") list.push_back(name);
	}

	int score = 0;

	for (int i = 0; i < N; i++)
	{
		string name;
		cin >> name;
		bool check = false;
		for (int i = 0; i < list.size(); i++)
		{
			if (name == list.at(i))
			{
				check = true;
				score += W;
				if (score >= G)
				{
					cout << "I AM NOT IRONMAN!!";
					return 0;
				}
			}
		}
		if (check == false)
		{
			if (score <= L) score = 0;
			else score -= L;
		}
	}
	cout << "I AM IRONMAN!!";

}