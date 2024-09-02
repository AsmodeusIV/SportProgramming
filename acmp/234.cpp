#include <iostream>
#include <cmath>

#define ll long long

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    char board[n][m];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j<m; j++) {
            board[i][j]='0';
        }
    }

    for(int i = 0; i<k;i++) {
        int x, y;
        cin >> x >> y;
        board[x-1][y-1] = '*';
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j<m; j++) {
            if(board[i][j]=='*')
                continue;

            int c = 0;
            if(i>0 && j>0 && board[i-1][j-1]=='*') c++;
            if(i<n-1 && j<m-1 && board[i+1][j+1]=='*') c++;
            if(i>0 && j<m-1 && board[i-1][j+1]=='*') c++;
            if(i<n-1 && j>0 && board[i+1][j-1]=='*') c++;
            if(i>0 && board[i-1][j]=='*') c++;
            if(i<n-1 && board[i+1][j]=='*') c++;
            if(j>0 && board[i][j-1]=='*') c++;
            if(j<m-1 && board[i][j+1]=='*') c++;

            if(c==0)
                board[i][j]='.';
            else
                board[i][j]='0'+c;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j<m; j++) {
            cout << board[i][j];
        }
        cout << endl;
    }

    return 0;
}