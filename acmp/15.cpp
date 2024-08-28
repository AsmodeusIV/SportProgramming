#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n*n; i++)
    {
        int x;
        cin >> x;
        ans += x;
    }
    cout << ans/2;
    return 0;
}
