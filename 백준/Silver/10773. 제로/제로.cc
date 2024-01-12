#include <iostream>
#include <stack>
using namespace std;

int main(void)
{
    stack<int> s;
    int k;
    int num;
    int s_size;
    int sum = 0;
    cin >> k;
    for(int i = 0; i < k; i++)
    {
        cin >> num;
        if(num == 0)
        {
            s.pop();
        }
        else{
            s.push(num);
        }
    }
    s_size = s.size();
    for(int i=0; i<s_size; i++)
    {
        sum += s.top();
        s.pop();
    }
    cout << sum << endl;
    
}