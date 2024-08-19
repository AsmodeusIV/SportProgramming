#include <iostream>

#define ll long long

using namespace std;

ll gcd(ll a, ll b)
{
    while(a > 0 && b > 0) {
        if (a > b)
            a = a%b;
        else
            b = b%a;
    }

    return max(a, b);
}

ll nok(ll a, ll b) {
    return a*b/gcd(a, b);
}


int main()
{
    ll a, b;

    cin >> a >> b;

    cout << nok(a, b);
}
