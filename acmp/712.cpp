#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

void solution()
{
    int n, m, k, w, pos = 0;
    cin >> n >> m >> k >> w;

    vector<ll> gor(w), points(n*m);

    for(ll& i: gor)
    {
        cin >> i;
    }

    sort(gor.begin(), gor.end(), greater<ll>());

    int board[n+5][m+5];
    board[0][0] = 1;


    for(int i = 1; i < n; i++)
    {
        if(i<k)
        {
            board[i][0] = board[i-1][0]+1;
        }
        else if(n-k<i)
        {
            board[i][0] = board[i-1][0]-1;
        }
        else
        {
            board[i][0] = board[i-1][0];
        }
        points[pos] = board[i][0];
        pos++;
    }
    for(int i = 0; i<n; i++){
    for(int j = 1; j < m; j++)
    {
        if(j<k)
        {
            board[i][j] = board[i][j-1]+1;
        }
        else if(m-k<j)
        {
            board[i][j] = board[i][j-1]-1;
        }
        else
        {
            board[i][j] = board[i][j-1];
        }
        if(i<k && j==1)
        {
            board[i][j]+=min(i, k);
        }
        points[pos] = board[i][j];
        pos++;
    }
    }
        sort(points.begin(), points.end(), greater<ll>());

    for(int i = 0; i<n; i++){
        for(int j = 0; j < m; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }

    /*ll ans = 0;
    for(int i = 0; i<min(w, m*n); i++)
    {
        cout << points[i] << " " << gor[i] << endl;
        ans += points[i]*gor[i];
    }
    cout <<  "Answer: " <<ans << endl;*/
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solution();
    }
    return 0;
}
