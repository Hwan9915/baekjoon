#include<iostream>
#include<string>
using namespace std;

void num_1021()
{
	string A, B;
	cin >> A >> B;
	int N = B.size() - A.size()+1, min=51;
	for (int i = 0; i < N; i++)
	{
		int temp = 0;
		for (int j = i ,k=0; j < i + A.size(); j++,k++)
		{
			if (B[j] != A[k]) temp++;
		}
		if (temp < min)min = temp;
	}
	cout << min<<endl;
}

int main()
{
	num_1021();
}