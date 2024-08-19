// https://codeforces.com/contest/702/problem/C

#include <iostream>
#include <vector>

#define ll long long

using namespace std;

bool solution(vector<ll>& points, vector<ll>& towers, ll rad)
{
    ll t = 0, p = 0;

    while(p < points.size() && t < towers.size())
    {
        if( (towers[t] - rad <= points[p]) && (points[p] <= towers[t] + rad) )
            p++;
        else
            t++;
    }

    if(p == points.size())
        return true;
    else
        return false;
}

ll binarySearch(vector<ll>& points, vector<ll>& towers)
{
    ll l = -1, r = (ll)2e9+1;

    while( r - l > 1)
    {
        ll m = (l + r) / 2;

        if(solution(points, towers, m))
            r = m;
        else
            l = m;
    }

    return r;
}

int main()
{
    int n, m;

    cin >> n >> m;

    vector<ll> points(n);
    vector<ll> towers(m);

    for(ll& i: points)
        cin >> i;

    for(ll& i: towers)
        cin >> i;

    ll ans = binarySearch(points, towers);

    cout << ans;
}
