#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int table[n][m], dp[n][m];
    for(int i = 0; i<n; i++) {
        for(int j = 0; j<m; j++)
            cin >> table[i][j];
    }
    dp[0][0] = table[0][0];
    for(int i = 1; i < m; i++)
        dp[0][i] = dp[0][i-1]+table[0][i];
    for(int i = 1; i < n; i++)
        dp[i][0] = dp[i-1][0]+table[i][0];
    for(int i = 1; i < n; i++) {
        for(int j = 1; j < m; j++) {
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + table[i][j];
        }
    }

    cout << dp[n-1][m-1];
    return 0;
}
