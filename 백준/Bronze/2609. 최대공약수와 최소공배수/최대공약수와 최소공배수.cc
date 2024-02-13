#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int c = a % b;
    while(c != 0){
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}
int lcd(int a, int b)
{
    return (a*b) / gcd(a,b);
    
}
int main(void)
{
    int f1, f2;
    cin >> f1 >> f2;
    cout << gcd(f1,f2) << '\n' << lcd(f1,f2);
    
}