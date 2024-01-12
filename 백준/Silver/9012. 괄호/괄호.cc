#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
    int n = 0;
    int flag = 0;
    string str;
    cin >> n;
    for(int i=0; i<n;i++)
    {
        stack<char> s;
        cin >> str;
        for(int j=0; j<str.size(); j++)
        {
            if(str[j] == '(')
            {
                s.push(str[j]);
            }
            else if(str[j] == ')')
            {
                if(s.empty())
                {
                    flag =1;
                    break;
                }
                else{
                    s.pop();
                }
            }
        }
        if(!s.empty() || flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        flag = 0;
    }
    
    
}