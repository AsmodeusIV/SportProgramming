#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

bool f(ll x, ll y, ll n, ll t)
{
    ll count = 0;
    //cout << t << " ";
    if(t >= min(x, y))
    {
        t -= min(x, y);

        count++;

        count += t/x + t/y;
    }
    //cout << count << " " << n << endl;
    return count >= n;
}

ll BinSearch(ll x, ll y, ll n)
{
    ll l = -1, r = (int)3e10;

    while(r - l > 1)
    {
        ll m = (r+l)/2;
        //cout << m << " " << f(x,y,n,m) << endl;
        if(f(x,y,n,m))
            r = m;
        else
            l = m;
    }

    return r;
}

int main()
{
    ll n, x, y;

    cin >> n >> x >> y;

    cout << BinSearch(x, y, n);
  return 0;
}
