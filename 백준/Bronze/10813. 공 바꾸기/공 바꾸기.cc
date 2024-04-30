#include <iostream>
using namespace std;
int main()
{
	int N, M;
	cin >> N >> M;
	int basket[100];
	for (int a = 1; a <= N; a++)
	{
		basket[a] = a;
	}
	for (int i = 1; i <= M; i++)
	{
		int b, c;
		cin >> b >> c;
		int change = basket[b];
		basket[b] = basket[c];
		basket[c] = change;
	}
	for (int a = 1; a <= N; a++)
	{
		cout << basket[a] << " ";
	}

	return 0;
}
