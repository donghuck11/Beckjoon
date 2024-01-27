#include <iostream>
#include <stack>
using namespace std;
int main(void)
{
    while(1){
        stack<char> a;
        string s;
        getline(cin, s);
        if(s == "."){
            break;
        }
    int flag = 0;
    for(int i=0; i<s.size(); i++)
    {
        char c = s[i];
        if(c == '(' || c == '[' )
        {
            a.push(c);
        }
        else if(c == ')')
        {
            if(a.empty() || a.top()!= '(')
            {
                flag = 1;
                break;
            }
            a.pop();
        }
        else if(c == ']')
        {
            if(a.empty() || a.top()!= '[')
            {
                flag = 1;
                break;
            }
            a.pop();
        }
    }
    if (flag || !a.empty()) cout << "no\n";
        else cout << "yes\n";
    }
    
}