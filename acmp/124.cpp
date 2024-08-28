#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> count(n, 0);
    for(int i = 0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        count[a-1]++;
        count[b-1]++;
    }
    for(int &i: count)
        cout << i << " ";
    return 0;
}
