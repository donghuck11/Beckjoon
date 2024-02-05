#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
   
    int T;
    int N;
    int DP[10001];
    
    cin >> T;
    
    DP[1] = 1;
    DP[2] = 2;
    DP[3] = 4;
    for(int j=4; j<11; j++)
    {
        DP[j] = DP[j-1] + DP[j-2] + DP[j-3];
    }
    
    for (int i = 0; i < T; i++)
    {
        cin >> N;
        cout << DP[N] << '\n';
    }

    
}