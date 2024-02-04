#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false); 
    cin.tie(0); cout.tie(0);
    
    int n;
    int dp[10001];
    cin >> n;
    dp[1] = 1;
    dp[2] = 2;
    if(n > 2){
        for(int i=3; i<=n; i++)
        {
            dp[i] = (dp[i-1] + dp[i-2]) % 10007;
        }
    }
    cout << dp[n];
}