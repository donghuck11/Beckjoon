#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n;
	int k;

	queue<int> q;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		q.push(i);
	}

	cout << "<";

	while (!q.empty())
	{
		for (int i = 0; i < k - 1; i++)
		{
			int arr = q.front();
			q.push(arr);
			q.pop();
		}
		if (q.size() == 1)
		{
			cout << q.front();
			q.pop();
		}
		else
		{
			cout << q.front() << ", ";
			q.pop();
		}
	}
	cout << ">";
}