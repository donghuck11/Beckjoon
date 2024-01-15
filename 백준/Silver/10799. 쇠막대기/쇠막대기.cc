#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
	stack<char> str;
	int cnt = 0;
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '(')
		{
			str.push(s[i]);
		}
		else if (s[i] == ')' && s[i - 1] == '(')
		{
			str.pop();
			cnt += str.size();
		}
		else if (s[i] == ')')
		{
			str.pop();
			cnt++;
		}
	}
	cout << cnt << "\n";
}