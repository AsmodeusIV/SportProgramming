#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    if(n*m>=k)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
