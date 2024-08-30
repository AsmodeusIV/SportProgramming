#include <iostream>
#include <vector>

#define ll long long

using namespace std;

int main() {
    int k;
    cin >> k;
    while (k--) {
        int n, m;
        cin >> n >> m;
        cout << 19*m + (n+239)*(n+366)/2 << endl;
    }
    return 0;
}