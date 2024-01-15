#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    stack<char> str;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cout << s[i];
        }
        else
        {
            if (s[i] == '(')
            {
                str.push(s[i]);
            }
            else if (s[i] == '*' || s[i] == '/')
            {
                while (!str.empty() && (str.top() == '*' || str.top() == '/'))
                {
                    cout << str.top();
                    str.pop();
                }
                str.push(s[i]);
            }
            else if (s[i] == '+' || s[i] == '-')
            {
                while (!str.empty() && str.top() != '(')
                {
                    cout << str.top();
                    str.pop();
                }
                str.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (!str.empty() && str.top() != '(')
                {
                    cout << str.top();
                    str.pop();
                }
                str.pop();
            }
        }
    }
    while (!str.empty())
    {
        cout << str.top();
        str.pop();
    }
}