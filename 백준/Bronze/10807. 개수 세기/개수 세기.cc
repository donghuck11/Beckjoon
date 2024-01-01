#include <iostream>
using namespace std;

int main(void)
{
    int N;
    int V;
    int arr[100];
    cin >> N;
    for(int i=0; i<N; i++)
    {
        cin >> arr[i];
    }
    cin >> V;
    int res = 0;
    for(int i=0; i<N; i++)
    {
        if(arr[i]==V)
            res++;
    }
    cout << res;
}