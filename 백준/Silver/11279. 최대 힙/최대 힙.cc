#include <iostream>
#include <queue>
using namespace std;

int main(void)
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    priority_queue<int> a;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x == 0)
        {
            if(a.empty())
            {
                cout << 0 << "\n";
            }
            else{
                cout << a.top() << "\n";
                a.pop();
            }
        }
        else{
            a.push(x);
        }
    } 
}