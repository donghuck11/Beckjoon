#include <iostream>
using namespace std;

int main(void)
{
    int x,y,w,h;
    int a,b;
    cin >> x >> y >> w >> h;
    a = min(x,y);
    b = min(h-y,w-x);
    cout << min(a,b) << endl;
}