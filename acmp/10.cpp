#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

ll f(ll a, ll b, ll c, ll d, ll x) {
    return a*pow(x, 3) + b*pow(x, 2) + c*x + d;
}

int main()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    for(int i = -100; i <= 100; i++) {
        if(f(a,b,c,d,i)==0)
            cout << i << " ";
    }
    return 0;
}
