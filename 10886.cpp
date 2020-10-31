#include<iostream>
using namespace std;

int main()
{
    int N;
    int list[2] = { 0, };
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 0) list[0]++;
        else list[1]++;
    }
    if (list[0] > list[1]) cout << "Junhee is not cute!";
    else cout << "Junhee is cute!";
}