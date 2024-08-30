#include <iostream>
#include <vector>

#define ll long long

using namespace std;

ll fact(ll n) {
    int p = 1;
    for(int i = 2; i<=n; i++)
        p*=i;
    return p;
}

int main() {
    ll n, k, sum=0;
    cin >> n >> k;
    ll c = fact(n) / fact(k);
    int z = 1;
    for (int i = 0; i <= n - k; i++) {
        sum += z * c / fact(i);
        z *= -1;
    }
    cout << sum;
    return 0;
}
