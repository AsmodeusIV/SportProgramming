#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> dp(s.size(), 0);
    if(s[0]=='0')
        dp[0]=1;
    for(int i = 1; i<s.size(); i++)
        if(s[i]=='0')
            dp[i]=dp[i-1]+1;
    int ans = 0;
    for(int i = 1; i < s.size(); i++)
        ans = max(ans, dp[i]);
    cout << ans;
    return 0;
}