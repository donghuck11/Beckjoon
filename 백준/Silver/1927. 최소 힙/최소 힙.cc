#include <iostream>
#include <queue>
using namespace std;

priority_queue <int, vector <int>, greater<int>> qa;

int main(void)
{
    ios::sync_with_stdio(false);
	cin.tie(NULL);
    
    int n;
    int x;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x != 0)
        {
            qa.push(x);
        }
        else
        {
            if(qa.empty())
            {
                cout << 0 << "\n";
            }
            else
            {
                cout << qa.top() << "\n";
                qa.pop();
            }
        }
    }
}