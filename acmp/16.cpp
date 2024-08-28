#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int go(int left, int lastLayer) {
    if(left==0) {
        return 1;
    }
    int ans = 0;
    for(int i = 1; i < lastLayer; i++) {
        if(left-i<0)
            break;
        ans+=go(left-i, i);
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i<n; i++) {
        ans += go(i, n-i);
    }
    cout << ans;
    return 0;
}
