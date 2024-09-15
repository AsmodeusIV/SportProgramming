#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >>a >>b >> c>> d;
    cout << max(d-a, 0)*c+min(a,d)*b;
    return 0;
}