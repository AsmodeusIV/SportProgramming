#include <iostream>
#include <vector>

#define ll long long

using namespace std;

bool solution(vector<ll>& pages, ll k, ll maxPages)
{
    int now = 0, ans = 0, c = 0;

    for(ll& i: pages)
    {
        if(i > maxPages)
            return false;
        if(now + i <= maxPages)
            now += i;
        else
        {
            c++;
            ans = max(ans, now);
            now = i;
        }
    }

    c++;
    ans = max(ans, now);

    return c<=k;
}

ll binarySearch(vector<ll>& pages, ll k)
{
    ll l = -1, r = (ll) 1e6;

    while( r - l > 1)
    {
        ll m = (l + r) / 2;

        if(solution(pages, k, m))
            r = m;
        else
            l = m;
    }

    return r;
}

int main()
{
    ll n, k;

    cin >> n;

    vector<ll> pages(n);

    for(ll& i: pages)
        cin >> i;

    cin >> k;

    cout << binarySearch(pages, k);
}
