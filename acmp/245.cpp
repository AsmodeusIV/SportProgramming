#include <iostream>
#include <vector>
#include  <algorithm>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> power(n);

    for(int& i: power)
    {
        cin >> i;
    }

    sort(power.begin(), power.end());

    ll sumCurr = 0, weak = -1, strong = 0, ans = 0;
    while (strong < n)
    {
        weak++;
        if(weak!=0)
            sumCurr -= power[weak-1];

        int sum2Weak;

        if(n>=2)
            sum2Weak = power[weak]+power[weak+1];
        else
            sum2Weak = power[weak];

        while(power[strong]<=sum2Weak && strong<n)
        {
            sumCurr += power[strong];
            strong++;
        }
        ans = max(ans, sumCurr);
    }
    cout << ans;
    return 0;
}
