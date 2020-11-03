#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

void num_11866()
{
	int N, M;
	cin >> N >> M;
	queue<int> list;
	for (int i = 1; i <= N; i++)
	{
		list.push(i);
	}
	int temp;
	cout << "<";
	while (1)
	{

		for (int i = 0; i < M-1; i++)
		{
			temp = list.front();
			list.pop();
			list.push(temp);
		}
		cout << list.front();
		list.pop();
		if (list.empty())
		{
			cout << ">";
			return;
		}
		else cout << ", ";
	}
}

int main()
{
	num_11866();
}