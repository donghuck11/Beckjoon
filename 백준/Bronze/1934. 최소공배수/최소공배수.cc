#include <iostream>
using namespace std;

int dive(int x, int y)
{
    if(x % y == 0)
        return y;
    else
        return dive(y, x % y);
    
}
int main(void)
{
    int T;
    int A,B;
    cin >> T;
    for(int i=0; i<T; i++){
        cin >> A >> B;
        if(A > B){
            cout << A * B / dive(A, B) << '\n';
        }
        else{
            cout << A * B / dive(B, A) << '\n';
        }
    }
}