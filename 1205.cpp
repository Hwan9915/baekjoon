#include<iostream>
#include<string>
using namespace std;

void num_1021()
{
	//입력받기/
	long long N, new_num, P, temp;
	int ranking=0;
	cin >> N >> new_num >> P;

	long long list[50] = { 0, };
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		list[i] = temp;
	}

	
	for(int i=0;i<N;i++)
	{
		if (i == 0 && new_num >= list[i])
		{
			ranking = 1;
			break;
		}
		if ((list[i-1]>new_num) && (new_num >= list[i]))
		{
			ranking = i + 1;
			break;
		}
	}

	if (ranking == 0 && N!=P) ranking = N+1;

	if ( ranking == 0 || (new_num == list[N - 1]&&N==P)|| (N == P && ranking == 0)) cout << "-1" << endl;
	else cout << ranking << endl;


}

int main()
{
	num_1021();
}