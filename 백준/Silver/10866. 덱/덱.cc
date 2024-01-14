#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main(void)
{

	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	int X;
	deque<int> d;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		string str;
		cin >> str;

		if (str == "push_front")
		{
			cin >> X;
			d.push_front(X);
		}
		else if (str == "push_back")
		{
			cin >> X;
			d.push_back(X);
		}
		else if (str == "pop_front")
		{
			if (d.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (str == "pop_back")
		{
			if (d.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (str == "size")
		{
			cout << d.size() << "\n";
		}
		else if (str == "empty")
		{
			cout << d.empty() << "\n";
		
		}
		else if (str == "front")
		{
			if (d.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << d.front() << "\n";
			}
		}
		else if (str == "back")
		{
			if (d.empty())
			{
				cout << "-1" << "\n";
			}
			else
			{
				cout << d.back() << "\n";
			}
		}
	}
}